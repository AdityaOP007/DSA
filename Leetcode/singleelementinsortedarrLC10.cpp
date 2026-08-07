#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& A) {
    int n = A.size();

    if (n == 1)
        return A[0];

    int st = 0, end = n - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (mid == 0 && A[0] != A[1])
            return A[mid];

        if (mid == n - 1 && A[n - 1] != A[n - 2])
            return A[mid];

        if (A[mid - 1] != A[mid] && A[mid] != A[mid + 1])
            return A[mid];

        if (mid % 2 == 0) {
            if (A[mid - 1] == A[mid]) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        } else {
            if (A[mid - 1] == A[mid]) {
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

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int ans = singleNonDuplicate(A);

    cout << "Single non-duplicate element: " << ans << endl;

    return 0;
}