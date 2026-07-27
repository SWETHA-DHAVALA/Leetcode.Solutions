class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a1 = nums[nums.size()-1] - 1;
        int a2 = nums[nums.size()-2] - 1;
        int m = a1* a2;
        return m;
    }
};