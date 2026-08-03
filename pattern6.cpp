#include<iostream>
using namespace std;
int main() {
    int n = 4;
       for(int i=0; i<n; i++) { //outer loop for rows
        for(int j=0; j<(i+1); j++) { //inner loop for columns
            cout << (i+1) << " "; //print the current row number
        }
        cout << endl;
       }
    return 0;
}

//1
//2 2
//3 3 3
//4 4 4 4