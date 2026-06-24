class Solution {
public:
    int maxProfit(vector<int>& prices){
        // size < 1
        if (prices.size() == 1){
            return 0;
        }
        else if(prices.size() == 2){
            if(prices[0] < prices[1]){
                return prices[1]- prices[0];
            }else{
                return 0;
            }
        }else{
            int max = 0;
            int minBuyIndex = 0;
            int maxSellIndex = 0;
            for(size_t i = 0; i < prices.size(); i++){
                // update minBuy if a smaller buy is found
                if(prices[i] < prices[minBuyIndex]){
                    // minbuy can't be the end
                    if(i != prices.size() - 1){
                        minBuyIndex = i;
                        //reset max sell if made invalid by update to minbuy
                        if(minBuyIndex > maxSellIndex){
                            maxSellIndex = minBuyIndex; 
                        }
                        if(prices[maxSellIndex] - prices[minBuyIndex] > max){
                            max = prices[maxSellIndex] - prices[minBuyIndex];
                        }
                    }
                }else if(prices[i] > prices[maxSellIndex]){
                    maxSellIndex = i;
                    if(prices[maxSellIndex] - prices[minBuyIndex] > max){
                        max = prices[maxSellIndex] - prices[minBuyIndex];
                    }
                }
            }
            return max;
        }
    }
};