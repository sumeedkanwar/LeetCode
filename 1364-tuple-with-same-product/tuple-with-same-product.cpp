class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int size = nums.size();
        int result = 0;
        unordered_map <int, int> sum;

        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                int product = nums[i] * nums[j];
                int count = sum[product];
                result += 8 * count;
                sum[product]++;
            }
        }

        return result;
    }
};