class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0;
        int i = 0, j = 1;
        while(j < prices.size())
        {
            if (prices[i] > prices[j]){
                i = j;
                j++;
            }
            else{
                p = max(p, prices[j] - prices[i]);
                j++;
            }
        }
        return p;
    }
};
