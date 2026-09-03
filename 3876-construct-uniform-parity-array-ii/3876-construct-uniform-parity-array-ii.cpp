class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = *min_element(nums1.begin(),nums1.end());
        if(mini % 2!=0)
        return true;
        int cnt = 0;
            for(int i = 0 ; i < nums1.size() ; i++)
            {
                if(nums1[i]%2!=0)
                {
                    cnt++;
                    break;
                }
            }
            if(cnt==1)
            return false;
            else
            return true;
    }
};