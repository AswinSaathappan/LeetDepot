class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        int i = 0;  // pointer for placing unique elements

        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;               // move to next position
                nums[i] = nums[j]; // place the unique element
            }
        }

        return i + 1; // Number of unique elements
    }
};
