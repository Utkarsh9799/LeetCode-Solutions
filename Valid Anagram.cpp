class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length())
            return false;
        
        vector<int> freq(26);
        int i;
        
        for(i = 0; i < s.length(); i++)
            freq[s[i] - 'a']++;
    
        for(i = 0; i < s.length(); i++)
        {
            freq[t[i] - 'a']--;
            
            if(freq[t[i] - 'a'] < 0)
                return false;
        }
        
        return true;
        
    }
};
