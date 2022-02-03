class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int m = matrix.size(), n = matrix[0].size();
        vector<int> a;
        
        int t = 0, d = m - 1, l = 0, r = n - 1, c = 0;
        
        while(t <= d && l <= r)
        {
            if (c == 0)
            {
                for (int i = l; i <= r; i++)
                {
                    a.push_back(matrix[t][i]);
                }
                t++;
                c++;
            }
                
            else if (c == 1)
            {
                for (int i = t; i <= d; i++)
                {
                    a.push_back(matrix[i][r]);
                }
                r--;
                c++;
            }
            
            else if (c == 2)
            {
                for (int i = r; i >= l; i--)
                {
                    a.push_back(matrix[d][i]);
                }
                d--;
                c++;
            }
            
            else if (c == 3)
            {
                for (int i = d; i >= t; i--)
                {
                    a.push_back(matrix[i][l]);
                }
                l++;
                c = 0;
            }
        }
        return a;
    }       
};
