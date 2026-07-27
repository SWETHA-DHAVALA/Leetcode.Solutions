class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int ncnt = 0 , pcnt =0, maxi = 0;
        if(nums.size()==1 && nums[0]>0)
        return 1;
        if(nums.size()==1 && nums[0]<=0)
        return 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]==0)
            {
                pcnt = 0 , ncnt = 0;
            }
            else if(nums[i]>0)
            {
                pcnt++;
                if(ncnt > 0)
                {
                    ncnt++;
                }
                maxi = max(maxi,pcnt);
            }
            else
            {
                int prevp = pcnt ;
                if(ncnt > 0)
                {
                    pcnt = ncnt + 1;
                }
                else
                pcnt = 0;
                ncnt = prevp + 1;
                maxi=max(maxi,pcnt);
            }
        }
        return maxi;

    }
};