class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 1)
        {
            return true;
        }
        double ans = 1;
        for(int i = 0; i < n; i++)
        {
            ans *= 3;
            if(ans == n)
            {
                return true;
            }
            else if(ans >= n)
            {
                return false;
            }
        }
        return false;
    }
};