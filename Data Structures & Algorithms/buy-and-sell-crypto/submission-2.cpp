class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = prices[0];
        int maxprofit = 0;

        for(int i = 1; i < prices.size(); ++i){
             buy = min(buy, prices[i]);

            int curr_profit = prices[i] - buy;

            //buy = min(buy, prices[i]);

            if(curr_profit > maxprofit){
                maxprofit = max(maxprofit, curr_profit);
            }
        }
        return maxprofit;
    }
};
