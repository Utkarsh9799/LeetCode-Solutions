class Solution {
public:
    int ctr = 0;
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> M;
        int i, n = s.length();
        for(i = 0; i < n; i++)
        {
            // cout<<i;
            if(M.find(s[i]) == M.end())
            {
                // M[s[i]] = t[i];
                if(M.find(t[i]) != M.end())
                {
                    if(M[t[i]] == t[i])
                        return false;
                }    
                M[s[i]] = t[i];
            }
            if(t[i] != M[s[i]])
                return false;
        }
        for(auto m : M)
            cout << m.first << " " << m.second << endl;
        ctr++;
        return (ctr == 2) ? true : (true && isIsomorphic(t, s));
    }
};
