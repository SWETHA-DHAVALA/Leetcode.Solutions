class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> s;
        map<int,int>mp;
        int n = nums.size();
        for(int x : nums)
        {
            mp[x]++;
            s.insert(x);
        }
        int maxval = 0;
        int maxidx = -1;
        vector<int>ans;
        for(auto i : mp)
        {
            if(i.second > maxval)
            {
                maxval = i.second;
                maxidx = i.first;
            }
        }
        ans.push_back(maxidx);
        for(int i = 1 ; i <= n ; i++)
        {
            if(s.find(i)==s.end()){
            ans.push_back(i);
            break;
            }
        }
        return ans;
    }
};