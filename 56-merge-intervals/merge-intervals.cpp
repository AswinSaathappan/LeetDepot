class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Step 1: Sort the intervals based on their starting value
        sort(intervals.begin(), intervals.end());

        // Create an empty vector to store the merged intervals
        vector<vector<int>> merged;

        // Loop through every interval in the sorted list
        for (auto& interval : intervals) {
            // If 'merged' is empty OR current interval does not overlap with last merged interval
            if (merged.empty() || merged.back()[1] < interval[0]) {
                // Add this interval directly to the merged list
                merged.push_back(interval);
            } else {
                // Overlapping case: merge current interval with last one in merged
                // Update the end value of last interval in 'merged'
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        // Return the final merged intervals
        return merged;
    }
};
