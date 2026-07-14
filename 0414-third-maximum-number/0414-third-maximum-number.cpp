class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        for(int i : nums)
        {
            s.insert(i);
        }
        // sort(s.begin(),s.end());
        // int sp = s.size();
        auto it = prev(s.end());
        if(s.size()<=2)
        return *it;
        else{
        it--;
        it--;
        return *it;
        }

    }
};