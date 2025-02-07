class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> ballColor;
        unordered_set<int> unique;
        vector<int> result;

        for (int i = 0; i < queries.size(); i++)
        {
            int ball = queries[i][0];
            int color = queries[i][1];

            if (ballColor.count(ball))
            {
                int old = ballColor[ball];
                bool flag = false;

                for (const auto& [key, val] : ballColor)
                {
                    if (key != ball && val == old)
                    {
                        flag = true;
                        break;
                    }
                }

                if(!flag)
                {
                    unique.erase(old);
                }
            }

            ballColor[ball] = color;
            unique.insert(color);
            result.push_back(unique.size());
        }
        return result;
    }
};