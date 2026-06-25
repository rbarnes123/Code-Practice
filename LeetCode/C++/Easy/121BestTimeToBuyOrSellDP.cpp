class Solution {
public:
    // store values in dp array, dp[i] = max(dp[i-1], prices[i] - min[minprice])
    int maxProfit(vector<int>& prices){
        int minPrice = prices[0];
        int profit = 0;
        for(size_t i = 1; i < prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            profit = max(profit, prices[i] - minPrice);
        }
        return profit;
    }
};