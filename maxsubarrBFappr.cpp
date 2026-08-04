#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
      int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;

    for(int start = 0; start < n; start++) {
        int currentSum = 0;
        for(int end = start; end < n; end++) {
           currentSum += arr[end];
           maxSum = max(maxSum, currentSum);
            cout << endl;
        }
    }
cout << "Maximum Subarray Sum: " << maxSum << endl;

    

    return 0;
}

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n = nums.size();
//         int maxSum = INT_MIN;

//         for (int start = 0; start < n; start++) {
//             int currentSum = 0;

//             for (int end = start; end < n; end++) {
//                 currentSum += nums[end];
//                 maxSum = max(maxSum, currentSum);
//             }
//         }

//         return maxSum;
//     }
// };