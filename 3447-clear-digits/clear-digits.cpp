class Solution {
public:
    string clearDigits(string s) {
        string ans = "";

        for (int i = 0; i < s.length(); i++)
        {
            if (!isdigit(s[i]) && isdigit(s[i + 1]) )
            {
            }
            else if(isdigit(s[i]) && isdigit(s[i - 1]) )
            {
                if (!ans.empty()) {
                    ans.pop_back();
                }
            }
            else if(!isdigit(s[i]))
            {
                ans += s[i];
            }
        }
        
        return ans;
    }
};