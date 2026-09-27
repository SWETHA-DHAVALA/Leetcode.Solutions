class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        // Count frequency
        for(int x : nums) {
            mp[x]++;
        }

        // Convert hashmap to vector
        vector<pair<int, int>> v(mp.begin(), mp.end());

        // Sort according to frequency
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Get top k elements
        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};