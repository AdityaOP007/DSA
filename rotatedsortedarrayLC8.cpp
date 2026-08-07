#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& A, int target) {
    int st = 0, end = A.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (A[mid] == target) {
            return mid;
        }

        // Left half is sorted
        if (A[st] <= A[mid]) {
            if (A[st] <= target && target <= A[mid]) {
                end = mid - 1;
                
            } else {
                st = mid + 1;
            }
        }
        // Right half is sorted
        else {
            if (A[mid] <= target && target <= A[end]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> A(n);

    cout << "Enter rotated sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    int ans = search(A, target);

    if (ans != -1) {
        cout << "Target found at index: " << ans << endl;
    } else {
        cout << "Target not found." << endl;
    }

    return 0;
}