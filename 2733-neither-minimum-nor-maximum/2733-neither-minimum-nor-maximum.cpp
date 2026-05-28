class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        // int n = nums.size();
        // if(n<=2) 
        // return -1;
        // auto it = minmax_element(nums.begin(),nums.end());
        // int min = *it.first;
        // int max = *it.second;
        // int ans=0;
        // // for(int i = 0 ; i < n ;i++)
        // // {
        // //     if(nums[i]!=min && nums[i]!= max)
        // //     {
        // //         ans = nums[i];
        // //         break;
        // //     }
        // // }
        // for(int  i : nums)
        // {
        //     if(i != min && i != max)
        //     {
        //         ans = i;
        //         break;
        //     }
        // }
        // return ans;/
        int n = nums.size();
        if(n<=2)
        return -1;
        sort(nums.begin(),nums.end());
        return nums[1];
    }
};