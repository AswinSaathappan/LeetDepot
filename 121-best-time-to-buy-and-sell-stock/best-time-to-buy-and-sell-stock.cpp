class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];  // Store the lowest price so far
        int maxPro = 0;            // Store the max profit

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];  // Update minimum price
            } else {
                int profit = prices[i] - minPrice;
                maxPro = max(maxPro, profit);  // Update max profit if this is better
            }
        }

        return maxPro;
    }
};
