class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i = 0; i < k; i++)
        {
            int min = findsmall(nums);
            nums[min] *= multiplier;
        }
        return nums;
    }

    int findsmall(vector<int>& nums)
    {
        int min = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < nums[min])
            {
                min = i;
            }
        }
        return min;
    }
};