class Solution {
public:
    int climbStairs(int n) {
        if (n <= 3)
        {
            return n;
        }

        int step1 = 1, step2 = 2;
        for (int i = 3; i <= n; i++)
        {
            int current = step1 + step2;
            step1 = step2;
            step2 = current;
        }

        return step2;
    }
};