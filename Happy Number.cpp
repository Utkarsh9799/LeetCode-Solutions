class Solution {
public:
    int calc(int n)
    {
        int sum = 0;
        while(n != 0)
        {
            int digit = n % 10;
            sum += (digit * digit);
            n /= 10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        if(n == 1)
            return true;
        
        int sqSum = calc(n);
        unordered_set<int> S;
        S.insert(sqSum);
        n = sqSum;
        while(sqSum != 1)
        {
            sqSum = calc(n);
            if(S.find(sqSum) != S.end())
                return false;
            S.insert(sqSum);
            n = sqSum;
        }
        return true;
    }
};
