#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;  // maps element in nums2 to its next greater
        stack<int> st;

        // Traverse nums2 from right to left
        for (int i = nums2.size() - 1; i >= 0; i--) {
            int num = nums2[i];

            // Maintain decreasing stack
            while (!st.empty() && st.top() <= num) {
                st.pop();
            }

            // If stack is not empty, top is the next greater element
            if (!st.empty()) {
                nextGreater[num] = st.top();
            } else {
                nextGreater[num] = -1;  // no greater element
            }

            // Push current element
            st.push(num);
        }

        // Prepare result for nums1 using the map
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreater[num]);
        }

        return result;
    }
};
