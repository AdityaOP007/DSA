#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = 0;
        int maxSum = INT_MIN;

        for (int num : nums) {
            currentSum += num;
            maxSum = max(maxSum, currentSum);

            if (currentSum < 0)
                currentSum = 0;
        }

        return maxSum;
    }
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    Solution obj;
    cout << "Maximum Subarray Sum: " << obj.maxSubArray(nums) << endl;

    return 0;
}






// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int currentSum = 0;
//         int maxSum = INT_MIN;

//         for (int i = 0; i < nums.size(); i++) {
//             currentSum += nums[i];
//             maxSum = max(maxSum, currentSum);

//             if (currentSum < 0) {
//                 currentSum = 0;
//             }
//         }

//         return maxSum;
//     }
// };