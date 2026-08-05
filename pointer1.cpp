#include <iostream>
using namespace std;

int main() {
    int a = 10;
    cout << &a << endl; // prints the address of variable a
    int* ptr = &a; // pointer to variable a
    cout << ptr << endl; // prints the address stored in ptr (same as &a

    return 0;
}