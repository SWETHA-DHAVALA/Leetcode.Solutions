class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix;
        // vector<int>suffix;
        int pre = 1 , suf=1;
        int  n = nums.size();
        for(int i = 0 ; i < n ; i++)
        {
            prefix.push_back(pre);
            pre*=nums[i];
        }
        vector<int>ans(n);
        for(int i = n-1 ; i >= 0 ; i--)
        {
           ans[i]=prefix[i]*suf;
            suf*=nums[i];
        }
        return ans;
    }
};