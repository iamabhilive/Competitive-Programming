class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        int a[matrix.size() * matrix.size()];
        int c = 0;
        for (auto i: matrix)
        {
            for (auto j: i)
            {
                a[c++] = j;
            }
        }
        --c;
        sort(a, a + c);
        return a[--k];
    }
};
