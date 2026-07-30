class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int b = n / 8;
        int r = n % 8;
        long long p = 1 ;
        long long ans = 0;
        while(b!=0)
        {
            ans = ans + (8 * p);
            p++;
            b--;
        }
        ans = ans + ( r * p);
        return ans;
    }
};