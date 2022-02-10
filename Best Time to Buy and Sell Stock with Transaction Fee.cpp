class Solution {
public:
    int dp[500005][2];
		
    int rec(vector<int> &prices, int i, int hold, int fees)
    {
        if (i >= prices.size())
        {
            return 0;
        }

        if (dp[i][hold] != -1)
        {
            return dp[i][hold];
        }

        if (hold == 0)
        {
            int op1 = rec(prices, i + 1, 1, fees) - prices[i];
            int op2 = rec(prices, i + 1, 0, fees);

            return dp[i][hold] = max(op1, op2);
        }
        else if (hold == 1)
        {
            int op1 = rec(prices, i + 1, 0, fees) + prices[i] - fees;
            int op2 = rec(prices, i + 1, 1, fees);

            return dp[i][hold] = max(op1, op2);
        }

        return 0;
    }
		
    int maxProfit(vector<int>& prices, int fee) {
        for (int i = 0; i < 500005; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                dp[i][j] = -1;
            }
        }

        int ans = rec(prices, 0, 0, fee);
        return ans;
    }
};
