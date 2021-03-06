class Solution {
public:
    int titleToNumber(string s) {
        int i, ans = 0, n = s.length();
        int power = n;
        for(i = 0; i < n; i++)
        {
            ans += pow(26, power - 1) * (s[i] - 'A' + 1);
            power--;
        }
        return ans;
    }
};
