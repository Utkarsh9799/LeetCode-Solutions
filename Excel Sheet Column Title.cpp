class Solution {
public:
    string convertToTitle(int n) {
        string ans = "";
        int temp = n;
        while(n)
        {
            n--; 
            ans += 'A' + (n % 26);
            n /= 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
