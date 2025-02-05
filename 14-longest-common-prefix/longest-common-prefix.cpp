class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        string str = "";
        int minLength = strs[0].size();
        
        for (int i = 0; i < strs.size(); i++) {
            minLength = min(minLength, (int)strs[i].size());
        }

        for (int i = 0; i < minLength; i++) {
            char check = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != check) {
                    return str;
                }
            }
            str += check;
        }
        return str;
    }
};