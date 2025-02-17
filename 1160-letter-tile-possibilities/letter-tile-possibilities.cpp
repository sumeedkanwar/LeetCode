class Solution {
public:

    void backtrack (unordered_map <char, int>& freq, int& count)
    {
        for(auto& pair: freq)
        {
            if(pair.second > 0)
            {
                pair.second--;
                count++;

                backtrack(freq, count);

                pair.second++;
            }
        }
    }

    int numTilePossibilities(string tiles)
    {
        unordered_map <char, int> freq;

        for(char c : tiles)
        {
            freq[c]++;
        }

        int count = 0;
        backtrack(freq, count);
        return count;
    }
};