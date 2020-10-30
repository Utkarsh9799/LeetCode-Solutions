class Solution {
public:
    vector<int> findAnagrams(string s1, string s2) {
        int M = s2.length();
        if(!(s1.length() && s2.length()) || s1.length() < s2.length())
            return {};
        vector<int> cont1(26),cont2(26), ans;
        for(int i = 0;i < M;i++)
        {
            cont1[s2[i]-'a']++;
            cont2[s1[i]-'a']++;
        }
        for(int i = M;i <= s1.length();i++)
        {   bool flag = true;
            for(int j=0;j<26;j++)
            {
                if(cont1[j] != cont2[j])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                ans.push_back(i-M);
            if(i != s1.length())
            {
                cont2[s1[i]-'a']++;
                cont2[s1[i-M]-'a']--;
            }
        }
        return ans;
    }
};
