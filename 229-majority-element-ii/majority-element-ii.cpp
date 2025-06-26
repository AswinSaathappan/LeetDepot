class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<int> result;

        for (int i = 0; i < n;) {
            int count = 1;
            int current = nums[i];
            int j = i + 1;

            // Count how many times current number occurs
            while (j < n && nums[j] == current) {
                count++;
                j++;
            }

            if (count > n / 3) {
                result.push_back(current);
            }

            i = j; // Move to next distinct number
        }

        return result;
    }
};
