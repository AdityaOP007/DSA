#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int a = 10;
    int* ptr = &a; // Pointer to integer

    cout << ptr << endl; // prints the address stored in ptr (address of a)
    ptr++;
    cout << ptr << endl; // prints the address stored in ptr after incrementing (address of a + sizeof(int))
    
    

    return 0;
}