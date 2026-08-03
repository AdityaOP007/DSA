#include<iostream>
using namespace std;
int main() {
    int n = 4;
    for(int i=1; i<=n; i++) { //outer loop for rows
        char ch = 'A';
        for(int j=1; j<=n; j++) { //inner loop for columns
            cout << ch;
            ch = ch + 1; //increment character to next letter
        }
        cout << endl;
    }




    return 0;
}

//ABCD
//ABCD
//ABCD
//ABCD