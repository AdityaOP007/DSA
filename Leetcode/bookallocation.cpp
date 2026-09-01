#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> &arr, int n, int m, int maxAllowedPages) {
    int st = 1;
    int pages = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxAllowedPages) {
            return false; // a single book has more pages than allowed
        }
         if (pages + arr[i] <= maxAllowedPages) {
            pages += arr[i];
        } else {
            st++;
            pages = arr[i];
    }
}

    return st > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m) {
    if (m > n) return -1; // not enough books to allocate
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int ans = -1;

    int st=0, end=sum; // range of possible answers

    while(st <= end) {
        int mid = st + (end - st) / 2;


        if(isvalid(arr,n,m,mid)){//left
          end = mid - 1;
          ans = mid;
        } else { // right
            st = mid + 1;
        }
    }

    return ans;
}

    
int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << "Minimum number of pages allocated: " << allocateBooks(arr, n, m) << endl;


    

    return 0;
}