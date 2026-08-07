#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int st = 0;
    int end = arr.size() - 1;

    while (st < end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] < arr[mid + 1]) {
            st = mid + 1;
        } else {
            end = mid;
        }
    }

    return st;
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the mountain array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int peakIndex = peakIndexInMountainArray(arr);

    cout << "Peak element index: " << peakIndex << endl;
    cout << "Peak element value: " << arr[peakIndex] << endl;

    return 0;
}