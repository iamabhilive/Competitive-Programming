class Solution {
public:
    int dp[1005][2][105];
		
    int rec(vector<int> &prices, int i, int hold, int tt, int k)
    {
        if (tt >= k || i >= prices.size())
        {
            return 0;
        }

        if (dp[i][hold][tt] != -1)
        {
            return dp[i][hold][tt];
        }

        if (hold == 0)
        {
            int op1 = rec(prices, i + 1, 1, tt, k) - prices[i];
            int op2 = rec(prices, i + 1, 0, tt, k);

            return dp[i][hold][tt] = max(op1, op2);
        }
        else if (hold == 1)
        {
            int op1 = rec(prices, i + 1, 0, tt + 1, k) + prices[i];
            int op2 = rec(prices, i + 1, 1, tt, k);

            return dp[i][hold][tt] = max(op1, op2);
        }

        return 0;
    }
    
    int maxProfit(int k, vector<int>& prices) {
        for (int i = 0; i < 1005; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                for (int a = 0; a < 105; a++)
                {
                    dp[i][j][a] = -1;
                }
            }
        }

        int ans = rec(prices, 0, 0, 0, k);
        return ans;
    }
};
