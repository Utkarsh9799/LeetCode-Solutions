class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        string first = strs[0], prefix = "";
        for(int j = 0; j < strs[0].size(); j++)
        {
            for(int i = 0; i < strs.size(); i++)
            {
                if(strs[i][j] != first[j])
                    return prefix;
            }
            prefix += strs[0][j];
        }
        return prefix;
    }
};
