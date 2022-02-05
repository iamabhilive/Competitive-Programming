class Solution {
public:
    int dp[47];
	int rec(int n)
	{
		if (n < 0)
		{
			return 0;
		}
		if (n == 0 || n == 0)
		{
			return 1;
		}
			
	    if (dp[n] != -1)
		{
			return dp[n];
		}
			
		int ans = rec(n - 1) + rec(n - 2);
			
		return dp[n] = ans;
	}
    
    int climbStairs(int n) {
        for (int i = 0; i < 47; i++)
		{
			dp[i] = -1;
		}
		int ans = rec(n);
		return ans;
    }
};
