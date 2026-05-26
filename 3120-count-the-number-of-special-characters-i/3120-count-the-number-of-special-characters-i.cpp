class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<int>s;
        for(char x : word)
        {
            int z = x + '0';
            s.insert(z);
        }
        int cnt = 0;
        for(auto i : s)
        {
            if(i>=65&&i<=90)
            {
                if(s.find(i+32)!=s.end())
                {
                    cnt++;
                    s.erase(i+32);
                }
            }
            else
            {
                if(s.find(i-32)!=s.end())
                {
                    cnt++;
                    s.erase(i-32);
                }
            }
        }
        return cnt;
    }
};