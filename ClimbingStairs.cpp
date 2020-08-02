class Solution {
public:
    int climbStairs(int n) {
        int i, step1 = 1, step2 = 2, next;
        if(n == 1)
            return step1;
        if(n == 2)
            return step2;
        for(i = 2; i < n; i++)
        {
            next = step1 + step2;
            step1 = step2;
            step2 = next;
        }
        return next;
    }
};
