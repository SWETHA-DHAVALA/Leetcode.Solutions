class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>s;
        for(auto i : nums)
        {
            s.insert(i);
        }
        int i = 1;
       for(int x : s)
       {
            if(s.find(i)!=s.end())
            i++;
            else{
            return i;
            }
       }
        return i;
    }
};