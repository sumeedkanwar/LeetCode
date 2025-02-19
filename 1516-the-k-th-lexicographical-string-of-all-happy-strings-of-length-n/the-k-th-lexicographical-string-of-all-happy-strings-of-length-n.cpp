class Solution {
public:
    vector<string> ans;

    string getHappyString(int n, int k) {
        string s = "";
        permutation(s, n);
        if(ans.size() < k)
        {
            return "";
        }
        else
        {
            return ans[k-1];
        }
    }

    void permutation(string &s, int n)
    {
        if(s.size() == n)
        {
            if(helper(s))
            {
                ans.push_back(s);
            }
            return;
        }
        for(char ch : {'a', 'b', 'c'})
        {
            s.push_back(ch);
            permutation(s, n);
            s.pop_back();
        }
    }

    bool helper(string &s)
    {
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] == s[i-1])
            {
                return false;
            }
        }
        return true;
    }
};