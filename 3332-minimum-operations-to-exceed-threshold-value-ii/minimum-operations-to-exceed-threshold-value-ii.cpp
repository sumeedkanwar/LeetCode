class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<int> a;
        for (int i = 0, j = 0, count = 0, x, y; ; ++count) {
            if (i < nums.size() && (j >= a.size() || nums[i] <= a[j]))
            {
                x = nums[i++];
            }
            else{
                x = a[j++];
            }
            if (x >= k)
            {
                return count;
            }
            if (i < nums.size() && (j >= a.size() || nums[i] <= a[j]))
            {
                y = nums[i++];
            }
            else
            {
                y = a[j++];
            }
            long t = 2L * x + y;
            a.push_back(t < k ? (int)t : k);
        }
        return -1;
    }
};