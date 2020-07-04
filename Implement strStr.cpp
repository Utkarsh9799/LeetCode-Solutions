class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() == 0 && needle.size() == 0)
            return 0;
        if(needle.size() == 0)
            return 0;
        if(haystack.size() == 0 || haystack.size() < needle.size())
        return -1;
    bool flag = true;
    int i = 0, j = 0, ind = 0;
    for(i = 0; i <= haystack.size() - needle.size(); i++)
    {
        flag = true;
        for(j = 0, ind = i; j < needle.size(); j++, ind++)
        {
            if(needle[j] != haystack[ind])
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
            return i;
    }
    return -1;   
    }
};
