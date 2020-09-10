class Solution {
public:
    char findTheDifference(string s, string t) {
        int i, n = s.length();
        vector<int> count(26);
        for(i = 0; i < n; i++)
            count[s[i] - 'a']++;
        
        for(i = 0; i < n; i++)
        {
            if(!count[t[i] - 'a'])
                return t[i];
            
            count[t[i] - 'a']--;
        }
        return t[n];
    }
};
