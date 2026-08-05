#include <iostream>
#include <vector>
using namespace std;
int main() {
   int arr[] = {1, 2, 3, 4, 5};
    cout << arr << endl; // prints the address of the first element of the array
    cout << *arr << endl; // prints the value of the first element of the array (1) 
    return 0;
}