class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n < 3)
        {
            return 0;
        }
        int a = 0, ml = 0, mr = 0, l = 0, r = n - 1;
        
        while (l < r)
        {
            if (height[l] < height[r])
            {
                if (height[l] < ml)
                {
                    a += ml - height[l];
                }
                else
                {
                    ml = height[l];
                }
                l++;
            }
            else
            {
                if (height[r] < mr)
                {
                    a += mr - height[r];
                }
                else
                {
                    mr = height[r];
                }
                r--;
            }
        }
        return a;
    }
};
