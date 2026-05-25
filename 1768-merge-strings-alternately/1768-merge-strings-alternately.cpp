class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n = min(word2.size(),word1.size());
        for(int i = 0 ; i < n ; i++)
        {
            ans+=word1[i];
            ans+=word2[i];
        }
        ans+=word1.substr(n);
        ans+=word2.substr(n);

        return ans;
    }
};