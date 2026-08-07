//123
//456
//789

#include<iostream>
using namespace std;
int main() {
    int n = 3;
    int num = 1;

    for(int i=0; i<n; i++) { //outer loop for rows
        for(int j=0; j<n; j++) { //inner loop for columns
            cout << num << " ";
            num++; //increment number to next value
        }
        cout << endl;
    }

    return 0;
}
  