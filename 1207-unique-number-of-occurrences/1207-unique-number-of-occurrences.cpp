class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i : arr)
        {
            mp[i]++;
        }
        set<int>s;
        for(auto i : mp)
        {
            if(s.count(i.second))
            {
                return false;
            }
            s.insert(i.second);
        }
        return true;
    }
};