class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if (nums.empty())
        {
            return 0;
        }
        int max = 0;
        int sum = nums[0];
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] < nums[i + 1])
            {
                sum += nums[i + 1];
            }
            else
            {
                if (sum > max)
                {
                    max = sum;
                }
                sum = nums[i + 1];
            }
        }

        if (sum > max)
        {
            max = sum;
        }

        return max;
        
    }
};