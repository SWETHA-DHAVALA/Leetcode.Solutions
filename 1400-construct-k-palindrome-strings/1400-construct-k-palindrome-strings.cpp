class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.length();
        if(n==k)
        return true;
        map<char,int>freq;
        for(int i = 0 ; i < n ; i++)
        {
            freq[s[i]]++;
        }
        int cnt = 0;
     
        for(auto &p :freq)
        {
            if(p.second % 2 != 0)
            cnt++;
        }
        if(cnt > k)
        return false;
        else if( n < k)
        return false;
        else return true;
    }
};