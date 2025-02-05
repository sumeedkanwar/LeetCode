class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2)
        {
            return true;
        }
        else
        {
            int i1, i2;
            for (int i = 0; i < s2.length(); i++)
            {
                if(s1[i] != s2[i])
                {
                    i1 = i;
                    break;
                }
            }
            for (int i = s2.length() - 1; i >= 0; i--)
            {
                if(s1[i] != s2[i])
                {
                    i2 = i;
                    break;
                }
            }
            char temp = s2[i2];
            s2[i2] = s2[i1];
            s2[i1] = temp;
            if (s1 == s2)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
    }
};