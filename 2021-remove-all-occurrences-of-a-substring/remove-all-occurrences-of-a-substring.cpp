class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part) != -1)
        {
            int pos = s.find(part);
            s.erase(pos, part.length());
        }
        return s;
    }
};