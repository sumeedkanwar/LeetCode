class Solution {
public:
    bool isValid(string s) {
        stack<char> list;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                list.push(s[i]);
            }
            else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
            {
                if(list.empty())
                {
                    return false;
                }
                char temp = list.top();
                if ((temp == '(' && s[i] != ')') || (temp == '{' && s[i] != '}') || (temp == '[' && s[i] != ']'))
                {
                    return false;
                }
                else
                {
                    list.pop();
                }

            }
        }

        if(!list.empty())
        {
            return false;
        }

        return true;
    }
};