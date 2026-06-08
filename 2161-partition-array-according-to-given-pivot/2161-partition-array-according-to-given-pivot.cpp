class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       vector<int>ans;
       vector<int>a;
       vector<int>b;
       vector<int>c;
       for(int i : nums)
       {
        if(i > pivot)
        b.push_back(i);
        else if(i < pivot)
        a.push_back(i);
        else
        c.push_back(i);
       }
       int n = nums.size();
    //    for(int i = 0 ; i < n ; i++)
       
        ans.insert(ans.end(),a.begin(),a.end());
        ans.insert(ans.end(),c.begin(),c.end());
        ans.insert(ans.end(),b.begin(),b.end());
       return ans;
    }
};