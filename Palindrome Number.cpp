class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int temp = x, num = 0;
        while(temp)
        {
            if(INT_MAX / 10 < num)
                return false;
            num = (num * 10) + (temp % 10);
            temp /= 10;
        }
        return (num == x);
    }
};
