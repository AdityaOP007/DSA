#include<iostream>
using namespace std;

int main()
{
    cout << "hello world" << endl;
    


//type casting 
 
  char grade = 'a';
  int value = grade; // implicit type casting
  cout << "The value of grade is: " << value << endl;
   
  double num = 9.78;
  int newnNum = (int) num; // explicit type casting
  cout << "The value of newNum is: " << newnNum << endl;
  return 0;
}