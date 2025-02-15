class Solution {
public:
    int punishmentNumber(int n)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            int squared = i * i;
            string s = to_string(squared);
            if (canPartition(s, 0, i, 0))
            {
                sum += squared;
            }
        }
        return sum;
    }

    bool canPartition(const string& s, int index, int target, int currentSum)
    {
        if (index == s.length())
        {
            return currentSum == target;
        }

        int temp = 0;
        for (int j = index; j < s.length(); j++)
        {
            temp = temp * 10 + (s[j] - '0');
            if (temp + currentSum > target)
            break;
            if (canPartition(s, j + 1, target, currentSum + temp))
            {
                return true;
            }
        }
        return false;
    }
};