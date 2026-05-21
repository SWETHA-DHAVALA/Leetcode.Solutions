class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        vector<int>s1=nums;
        vector<int>s2=nums;
        ans.insert(ans.end(),s1.begin(),s1.end());
        ans.insert(ans.end(),s2.begin(),s2.end());

        return ans;
    }
};