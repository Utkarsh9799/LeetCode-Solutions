class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length() < b.length())
            return addBinary(b, a);
        bool carry = false;
        int i = 0, m = a.size(), n = b.size(); 
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string ans;
        while(i < n)
        {
            if(a[i] == '0' && b[i] == '0')
            {
                if(carry)
                {
                    ans += "1";
                    carry = false;
                }
                else
                    ans += "0";
            }
            else if(a[i] == '1' && b[i] == '1')
            {
                if(carry)
                    ans += "1";
                else
                {
                    ans += "0";
                    carry = true;
                }
            }
            else
            {
                if(carry)
                    ans += "0";
                else
                    ans += "1";
            }
            i++;
        }
        while(i < m)
        {
            if(carry)
            {
                if(a[i] == '0')
                {
                    ans += "1";
                    carry = false;
                }
                else
                    ans += "0";
            }
            else
                ans += a[i];
            i++;
        }
        if(carry)
            ans += "1";
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
