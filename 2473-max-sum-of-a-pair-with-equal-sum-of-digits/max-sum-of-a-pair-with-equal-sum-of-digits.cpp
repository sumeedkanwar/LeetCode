class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int ans = -1;
        unordered_map <int, int> maxSum;

        for(int i = 0; i < nums.size(); i++)
        {
            int ds = digitcount(nums[i]);
            if (maxSum.count(ds)) {
                ans = max(ans, maxSum[ds] + nums[i]);
                maxSum[ds] = max(maxSum[ds], nums[i]);
            } else {
                maxSum[ds] = nums[i];
            }
        }
        return ans;
    }

    int digitcount(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
};