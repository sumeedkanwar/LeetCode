class Solution {
public:
    bool isValid(string s) {
        bool flag = true;
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
                    flag = false;
                    break;
                }
                else
                {
                    list.pop();
                }

            }
        }

        if(!list.empty())
        {
            flag = false;
        }

        return flag;
    }
};