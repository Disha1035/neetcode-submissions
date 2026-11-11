class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buys=prices[0];
        
        int maxprofit= 0;
        for(int i=1 ;i< prices.size() ;i++)
        {
            buys=min(buys , prices[i]);
            int profit = prices[i]-buys;
            maxprofit=max(maxprofit , profit);

        }
        return maxprofit;
        
    }
};
