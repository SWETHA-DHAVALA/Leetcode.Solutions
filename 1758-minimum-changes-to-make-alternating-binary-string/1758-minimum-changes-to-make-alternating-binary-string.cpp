class Solution {
public:
    int minOperations(string s) {
        int cnt1 = 0 , cnt2 = 0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i]!=(i%2 ?'1':'0'))cnt1++;
            if(s[i]!=(i%2?'0':'1'))cnt2++;
        }
        int res = min(cnt1,cnt2);
        return res;
    }
};