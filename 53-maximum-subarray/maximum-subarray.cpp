class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            // Either start a new subarray at nums[i], or continue the previous one
            currentSum = max(nums[i], currentSum + nums[i]);

            // Update maxSum if currentSum is greater
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};