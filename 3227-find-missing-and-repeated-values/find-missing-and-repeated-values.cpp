class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int N = n * n;

        long long expectedSum = 1LL * N * (N + 1) / 2;
        long long expectedSqSum = 1LL * N * (N + 1) * (2 * N + 1) / 6;

        long long actualSum = 0;
        long long actualSqSum = 0;

        // Normal for loops to traverse the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int val = grid[i][j];
                actualSum += val;
                actualSqSum += 1LL * val * val;
            }
        }

        long long diff = actualSum - expectedSum;                 // a - b
        long long sum = (actualSqSum - expectedSqSum) / diff;     // a + b

        long long a = (diff + sum) / 2;  // repeated
        long long b = a - diff;          // missing

        return {static_cast<int>(a), static_cast<int>(b)};
    }
};
