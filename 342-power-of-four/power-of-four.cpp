class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0)
        {
            return false;
        }
        if(n == 1)
        {
            return true;
        }
        else if(n % 4 == 0)
        {
            return true && isPowerOfFour(n / 4);
        }
        else
        {
            return false;
        }
        
    }
};