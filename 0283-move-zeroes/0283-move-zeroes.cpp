class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        for(int j = 0 ; j < nums.size();j++){
            if(nums[j]!=0)
            {
                swap(nums[left],nums[j]);
                left++;
            }
        }
    }
};