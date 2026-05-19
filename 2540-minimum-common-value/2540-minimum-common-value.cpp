class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int  n = nums1.size();
        set<int> s;
        for(int i : nums1)
        {
            s.insert(i);
        }
        for(int  i = 0 ; i < nums2.size() ; i++)
        {
            if(s.count(nums2[i]))
            {
                return nums2[i];
            }
        }
        return -1;
    }
};