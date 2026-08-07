#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    cout << "Size of vector: " << vec.size() << endl;
    vec.push_back(10);
    vec.push_back(20);
    cout << "Size of vector after adding elements: " << vec.size() << endl;

    for(int value : vec) {
        cout << value << " ";
    }


    

    return 0;
}