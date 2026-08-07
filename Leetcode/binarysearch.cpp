#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int st = 0;
    int end = n - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            st = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int result = binarySearch(arr, n, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
