class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++)
        {
         ans.push_back(nums[i]);
        //  ans[i+n].push_back(nums[n-i-1]);   
        }
        for(int i = n - 1 ; i >= 0 ; i--)
        {
            ans.push_back(nums[i]);
        }
        return ans;
    }
};