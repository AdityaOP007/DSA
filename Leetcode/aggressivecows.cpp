#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getDistance(vector<int> &stalls, int cows) {
    sort(stalls.begin(), stalls.end());
    int low = 1;
    int high = stalls.back() - stalls.front();
    int result = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int count = 1;
        int last_position = stalls[0];

        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - last_position >= mid) {
                count++;
                last_position = stalls[i];
            }
        }

        if (count >= cows) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int n, cows;
    cin >> n >> cows;
    vector<int> stalls(n);
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    int maxDistance = getDistance(stalls, cows);
    cout << maxDistance << endl;

    return 0;
}