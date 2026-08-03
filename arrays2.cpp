#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {90, 85, 78, 92, 88};
    marks[1] = 101 ; // Output: 101
   cout << marks[0] << endl; // Output: 90  
   cout << marks[1] << endl; // Output: 85
   cout << marks[2] << endl; // Output: 78
   cout << marks[3] << endl; // Output: 92
   cout << marks[4] << endl; // Output: 88
   
   return 0;
}