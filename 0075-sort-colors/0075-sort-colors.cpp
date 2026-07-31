class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> mp;
        for(int i : nums)
        {
            mp[i]++;
        }
        int j = 0;
        for(auto i : mp)
        {
            while(i.second--)
            {
                nums[j]=i.first;
                j++;
            }
        }
    }
};