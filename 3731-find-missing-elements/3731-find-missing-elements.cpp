class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m = nums[0]+1;
        vector<int>ans;
        int i = 1;
        while(m <= nums[nums.size()-1])
        {
            if(nums[i]!=m){
            ans.push_back(m);
            }
            else
            i++;
            m++;
        }
        return ans;
    }
};