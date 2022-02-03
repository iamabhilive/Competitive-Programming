class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a = nums[0], f = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == a)
            {
                f++;
            }
            else
            {
                f--;
            }
            if (f <= 0)
            {
                a = nums[i];
                f++;
            }
        }
        return a;
    }
};
