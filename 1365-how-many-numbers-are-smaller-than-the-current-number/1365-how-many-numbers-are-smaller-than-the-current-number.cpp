class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int>a;
        vector<int>ans;
        for(int i : nums)
        {
            a[i]++;
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int cnt = 0;
            for(auto j : a)
            {
                if(nums[i]>j.first)
                {
                    cnt+=j.second;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};