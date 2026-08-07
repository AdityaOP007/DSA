#include <iostream>
#include <vector>
using namespace std;
int binarySearch(int arr[], int n, int target) {
    int st = 0;
    int end = n - 1;

    while (st <= end) {
        int mid = (st + end) / 2;

        if (arr[mid] == target) {
            return mid; // Target found at index mid
        } else if (arr[mid] < target) {
            st = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Get the size of the array
    int target = 3;
    int result = binarySearch(arr, n, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}