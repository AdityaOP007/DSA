#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a; // Pointer to integer
    int** ptr2 = &ptr; // Pointer to pointer to integer

    cout << "Value of a: " << a << endl; // prints the value of a
    cout << "Address of a: " << &a << endl; // prints the address of a
    cout << "Value of ptr (address of a): " << ptr << endl; // prints the address stored in ptr
    cout << "Value pointed to by ptr: " << *ptr << endl; // prints the value of a using pointer dereferencing
    cout << "Address of ptr: " << &ptr << endl; // prints the address
    cout << "Value of ptr2 (address of ptr): " << ptr2 << endl; // prints the address stored in ptr2
    cout << "Value pointed to by ptr2 (address of a): " << *ptr2 << endl; // prints the address of a using pointer to pointer dereferencing
    
    

    return 0;
}