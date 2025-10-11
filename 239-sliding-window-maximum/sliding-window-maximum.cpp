#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        deque<int> dq;  // will store indexes
        vector<int> result;
        int n = arr.size();

        for (int i = 0; i < n; i++) {

            // 1️Remove elements out of this window
            while (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();

            // 2️Remove all smaller elements (they are useless)
            while (!dq.empty() && arr[dq.back()] < arr[i])
                dq.pop_back();

            // 3️Add current element's index
            dq.push_back(i);

            // 4If we have processed at least k elements, record the max
            if (i >= k - 1)
                result.push_back(arr[dq.front()]);
        }

        return result;
    }
};
