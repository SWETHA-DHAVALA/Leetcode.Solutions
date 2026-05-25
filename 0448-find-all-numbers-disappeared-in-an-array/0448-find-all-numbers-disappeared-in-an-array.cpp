class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        set<int>s;
        for(int i : nums)
        {
            s.insert(i);
        }
        vector<int>ans;
        // if(n == s.size()){
        //     ans.push_back(0);
        // return ans; 
        
        // int i = 1;
       for(int i = 1 ; i <= n ; i++)
       {
        if(s.find(i)==s.end())
        ans.push_back(i);
       }
        return ans;
    }
};