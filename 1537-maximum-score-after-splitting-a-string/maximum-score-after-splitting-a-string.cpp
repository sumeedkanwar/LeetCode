class Solution {
public:
    int maxScore(string s) {
        int ans = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            int left = 0;
            int right = 0;

            for (int j = 0; j <= i; j++)
            {
                if (s[j] == '0')
                {
                    left++;
                }
            }
            for (int k = i+1; k < s.length(); k++)
            {
                if (s[k] == '1')
                {
                    right++;
                }
            }

            if ((right + left) > ans)
            {
                ans = right + left;
            }
        }

        return ans;
    }
};