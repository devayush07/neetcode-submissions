class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minbuy=prices[0];

        for(int i=1;i<prices.size();++i)
        {
            int profit=prices[i]-minbuy;

            if(profit>maxprofit)
            maxprofit=profit;

            if(prices[i]<minbuy)
            minbuy=prices[i];
         }
         return maxprofit;
    }
};
