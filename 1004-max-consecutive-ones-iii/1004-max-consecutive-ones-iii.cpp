class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int maxi = 0 , zcnt = 0 , len = 0;
        for(int i = right ; i < nums.size() ; i++)
        {
            if(nums[i]==0)
            zcnt++;
            while(zcnt > k)
            {
                if(nums[left]==0)
                zcnt--;
                left++;
            }
            len = i - left + 1;
            maxi = max(len,maxi);
        }
        return maxi;
    }
};