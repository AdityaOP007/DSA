#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<char> vec = {'a', 'b', 'c'}; //3 elements
  
   for(char c : vec) { //for each loop
       cout << c << " ";
   }
    return 0;
}