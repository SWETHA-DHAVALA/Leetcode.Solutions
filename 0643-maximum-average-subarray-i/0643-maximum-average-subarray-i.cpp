class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi = INT_MIN;
        double sum = 0;
        int l = 0 , r = k ;
        for(int i = 0 ; i < r ; i++)
        {
            sum+=nums[i];
        }
        maxi = max(maxi,sum);
            while(r < nums.size())
            {
                sum-=nums[l];
                l++;
                sum+=nums[r];
                 r++;
                maxi = max(maxi,sum);
            }
        double ans = maxi / k;

        return ans;
    }
};