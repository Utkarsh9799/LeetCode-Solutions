class Solution {
public:
    string getHint(string secret, string guess) {
        if(secret == guess)
            return to_string(secret.length()) + "A0B";
        
        vector<int> count(10);
        int i, n = secret.length(), bull = 0, cow = 0;            
        
        for(i = 0; i < secret.length(); i++)
        {
            if(secret[i] == guess[i])
            {
                bull++;
                continue;
            }
            
            if(count[secret[i] - '0'] < 0)
                cow++;
            count[secret[i] - '0']++;
            
            if(count[guess[i] - '0'] > 0)
                cow++;
            count[guess[i] - '0']--;
        }
        return to_string(bull) + "A" + to_string(cow) + "B";
    }
};
