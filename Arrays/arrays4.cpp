#include <iostream>
using namespace std;

    void changeArray(int arr[], int size) {
        cout << "In function changeArray: " << endl;
        for (int i = 0; i < size; i++) {
            arr[i] = arr[i] * 2;
        }
    }
 int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    changeArray(arr, 5);
    cout << "in main" << endl;
    for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return 0;
 }

