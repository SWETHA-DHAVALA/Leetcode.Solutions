class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int max = nums[0];
        int min = nums[0];
        for(int i = 1 ; i < nums.size() ; i++)
            {
                if( nums[i] > max)
                {
                    max = nums[i];
                }
                if(nums[i]<min)
                {
                    min = nums[i];
                }
            }
        long long  m = max - min ;
        long long z = k * m ;
        return z;
    }
};