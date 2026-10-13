
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x = 0;

        for (int i = 0; i < nums.size(); i++) {
            x = x ^ nums[i];
        }

        long long bit = (long long)x & (-(long long)x);

        int a = 0, b = 0;

        for (int i = 0; i < nums.size(); i++) {
            if ((nums[i] & bit) == 0)
                a = a ^ nums[i];
            else
                b = b ^ nums[i];
        }

        return {a, b};
    }
};
