class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        if(nums.size()==1)
            return -1;
       long long sum = 0 , prod = 1;
       int i = -1 , j = nums.size();
       while(i+2<j)
       {
        if(sum<prod)
        {
            i++;
            sum+=nums[i];
        }
        else
        {
            j--;
            prod*=nums[j];
        }
        if(i+2==j&&sum==prod)
        {
            return i+1;
        }
       }
       
        return -1;
    }
};