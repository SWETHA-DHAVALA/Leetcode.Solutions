class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>ans;
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]==1)
            cnt++;
            else
            {
                ans.push_back(cnt);
                cnt = 0;
            }
        }
        if(cnt!=0)
        ans.push_back(cnt);
        int max = *max_element(ans.begin(),ans.end());
        return max;
    }
};