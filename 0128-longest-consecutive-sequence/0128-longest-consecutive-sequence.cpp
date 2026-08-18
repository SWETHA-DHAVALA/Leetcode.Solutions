class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
        return 0;
        set<int>s;
        for(auto n : nums)
        {
            s.insert(n);
        }
        int cnt = 0;
        for(int n : s)
        {
            if(!s.contains(n - 1))
            {
                int num = n ;
                int cstreak = 1;
                while(s.contains(num + 1))
                {
                    num++;
                    cstreak++;
                }
                cnt = max(cnt,cstreak);
            }
        }
        return cnt;
    }
};
