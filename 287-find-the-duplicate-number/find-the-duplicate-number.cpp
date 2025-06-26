class Solution {
public:
    int findDuplicate(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());  // Sort the array

        // Loop to find adjacent duplicate
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                return arr[i];  // Found the duplicate
            }
        }

        return -1;  // No duplicate found 
    }
};
