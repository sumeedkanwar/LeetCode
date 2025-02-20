class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string check = "";
        for(int i = 0; i < nums.size(); i++)
        {
            check.push_back(nums[i][i] == '0' ? '1' : '0');
        }
        return check;
    }
};