class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int a = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target)
            {
                a = mid;
                break;
            }
            else if (nums[mid] < target)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        
        int b = -1, c = -1;
        if (a != -1)
        {
            b = a, c = a;
            
            while (b > 0 && nums[b - 1] == target)
            {
                b--;
            }
            
            while (c < nums.size() - 1 && nums[c + 1] == target)
            {
                c++;
            }
        }
        return {b, c};
    }
};
