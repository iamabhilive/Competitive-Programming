class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> a(n, vector<int>(n, 0));
        
        int k = 0, x = 1;
        while(k <= n / 2)
        {
            for (int i = k; i < n - k - 1 && x <= n * n; i++)
            {
                a[k][i] = x++;
            }
            
            for (int j = k; j < n - k - 1 && x <= n * n; j++)
            {
                a[j][n - k - 1] = x++;
            }
            
            for (int i = n - k - 1; i > k && x <= n * n; i--)
            {
                a[n - k - 1][i] = x++;
            }
            
            for (int i = n - k - 1; i > k && x <= n * n; i--)
            {
                a[i][k] = x++;
            }
            k++;
        }
        
        if (n % 2 == 1)
        {
            a[n / 2][n / 2] = n * n;
        }
        
        return a;
    }
};
