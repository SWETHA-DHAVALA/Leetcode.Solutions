class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>s1(nums.begin(),nums.begin()+n);
        vector<int>s2(nums.begin()+n,nums.end());
        vector<int>ans;
        int j = 0 , k = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(i%2==0)
            {
                ans.push_back(s1[j]);
                j++;
            }
            else
            {
                ans.push_back(s2[k]);
                k++;
            }

        }
        return ans;
    }
};