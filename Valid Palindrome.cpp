class Solution {
public:
    bool valid(char c)
    {
        if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))
            return true;
        return false;
    }
    
    bool isPalindrome(string s) {
        int n = s.length();
        int i = 0, j = n - 1;
        while(i <= j)
        {
            if(!valid(s[i]))
            {
                i++; 
                continue;
            }
            if(!valid(s[j]))
            {
                j--; 
                continue;
            }
            if(tolower(s[i]) != tolower(s[j]))
                return false;
            i++; 
            j--;
        }
        return true;
    }
};
