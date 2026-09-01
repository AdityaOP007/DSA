#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;


// Function to check whether it is possible
// to paint all boards within maxAllowedTime
// using at most m painters.
bool isValid(vector<int>& boards, int n, int m, int maxAllowedTime) {

    int painters = 1;
    int time = 0;

    for (int i = 0; i < n; i++) {

        // If current painter can paint this board
        if (time + boards[i] <= maxAllowedTime) {
            time += boards[i];
        }
        else {
            // Assign this board to a new painter
            painters++;
            time = boards[i];

            // More painters than available
            if (painters > m) {
                return false;
            }
        }
    }

    return true;
}


// Function to find the minimum time
// required to paint all boards
int painterPartition(vector<int>& boards, int n, int m) {

    // If there are more painters than boards,
    // each painter cannot get at least one board.
    if (m > n) {
        return -1;
    }

    int st = 0;
    int end = 0;

    // Minimum possible answer = largest board
    // Maximum possible answer = sum of all boards
    for (int i = 0; i < n; i++) {
        st = max(st, boards[i]);
        end += boards[i];
    }

    int ans = -1;

    // Binary Search
    while (st <= end) {

        int mid = st + (end - st) / 2;

        if (isValid(boards, n, m, mid)) {

            // mid is a possible answer
            ans = mid;

            // Try to find a smaller answer
            end = mid - 1;
        }
        else {

            // mid is not possible
            // so search on the right side
            st = mid + 1;
        }
    }

    return ans;
}


int main() {

    // Example
    vector<int> boards = {10, 20, 30, 40};

    int n = boards.size();
    int m = 2;

    int result = painterPartition(boards, n, m);

    cout << "Minimum time required: " << result << endl;

    return 0;
}