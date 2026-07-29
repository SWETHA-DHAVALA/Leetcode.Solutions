class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> mp;
        for(auto ch : s)
        {
            mp[ch]++;
        }
        int  maxi1 = 0,maxi2=0;
        for(auto i : mp)
        {
             int vfreq = 0 , cfreq = 0 ;
            if(i.first=='a'||i.first=='e'||i.first=='i'||i.first=='o'||i.first=='u')
            {
                vfreq = i.second;
            }
            else
            cfreq = i.second;
            maxi1=max(maxi1,vfreq);
            maxi2=max(maxi2,cfreq);
        }
        int sum = maxi1+maxi2;
        return sum;
    }
};