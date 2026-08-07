#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
   
}

int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    int target = 5;

   cout << linearSearch(arr, size, target) << endl;

   

    return 0;
}