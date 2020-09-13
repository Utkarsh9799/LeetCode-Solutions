class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        vector<string> ans;
        unordered_set<string> s, deleted;
        int i = 0, a = A.length(), b = B.length();
        while(i < a)
        {
            int temp = i;
            while(A[i] != ' ' && i < a)
                i++;
            string word;
            for(int j = temp; j < i; j++)
                word += A[j];
            if(s.find(word) != s.end())
            {
                s.erase(word);
                deleted.insert(word);
            }
            else
            {
                if(deleted.find(word) == deleted.end())
                    s.insert(word);
            }
            i++;
        }
        i = 0;
        while(i < B.length())
        {
            int temp = i;
            while(B[i] != ' ' && i < b)
                i++;
            string word;
            for(int j = temp; j < i; j++)
                word += B[j];
            if(s.find(word) != s.end())
            {
                s.erase(word);
                deleted.insert(word);
            }
            else
            {
                if(deleted.find(word) == deleted.end())
                    s.insert(word);
            }
            i++;
        }
        for(auto i : s)
            ans.push_back(i);
        return ans;
    }
};
