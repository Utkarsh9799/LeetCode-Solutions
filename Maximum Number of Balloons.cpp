class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> count(26);
        int i, t = text.length();
        for(i = 0; i < t; i++)
            count[text[i] - 'a']++;
        int abn = min(min(count[0], count[1]), count['n' - 'a']); // Letters 'A' 'B' 'N'
        int lloo = min(count['l' - 'a'], count['o' - 'a']); // Letters 'L' 'O'
        return min(abn, lloo / 2);
    }
};
