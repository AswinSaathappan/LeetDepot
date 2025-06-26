class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int m = mat[0].size();

        for (int i = 0; i < n; i++) {           // Loop through rows
            for (int j = 0; j < m; j++) {       // Loop through columns
                if (mat[i][j] == target) {
                    return true;               // Found the target
                }
            }
        }

        return false; // If we finish the loop and don't find it
    }
};
