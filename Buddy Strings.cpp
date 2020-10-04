class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.length() != B.length())
            return false;
        int i, n = A.length();
        bool flag = false;
        unordered_set<char> s;
        vector<int> miss;
        for(i = 0; i < n; i++)
        {
            if(A[i] != B[i])
                miss.push_back(i);
            else
            {
                if(s.find(A[i]) != s.end())
                    flag = true;
                else
                    s.insert(A[i]);
            }
        }
        if(miss.size() != 2 && miss.size() != 0)
            return false;
        
        if(miss.size() == 0)
            return (flag) ? true : false;
    
        return (A[miss[0]] == B[miss[1]] && A[miss[1]] == B[miss[0]]) ? true : false;
    }
};
