class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        for(int i : nums)
        {
            m[i]++;
        }
        int ans = 0 ;
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     if(m[i].second==1){
        //     ans=m[i].first;
        //     break;
        //     }
        for(auto &p : m)
        {
            if(p.second == 1){
            ans= p.first;
            break;
            }
        }
    return ans;
    }
};