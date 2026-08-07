#include<iostream>
using namespace std;
int main() {
    int n = 4;
    int num = 1;

    for(int i=0; i<n; i++) { //outer loop for rows
        for(int j=0; j<(i+1); j++) { //inner loop for columns
            cout << num << " ";
            num++; //increment number to next value
        }
        cout << endl;
    }

    return 0;
}

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 