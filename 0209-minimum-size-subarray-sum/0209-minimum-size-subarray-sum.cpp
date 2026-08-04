class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0 , r = 0 ;
        int mini = INT_MAX , sum =0;
        for(int i = r ; i < nums.size() ; i++)
        {
            sum+=nums[i];
            while(sum >= target)
            {
                mini = min(mini,i-l+1);
                sum-=nums[l];
                l++;
            }
        }
        if(mini==INT_MAX)
        return 0;
        else
        return mini;
    }
};