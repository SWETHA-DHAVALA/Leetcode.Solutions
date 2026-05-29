class Solution {
public:
    int minElement(vector<int>& nums) {
        int cnt = 0;
        int min = INT_MAX,rem;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int sum = 0;
            while(nums[i]>0)
            {
                rem = nums[i]%10;
                sum+=rem;
                nums[i]/=10;
            }
            // ans.push_back(sum);
            if(sum < min)
            min = sum;
        }
        return min;
    }
};