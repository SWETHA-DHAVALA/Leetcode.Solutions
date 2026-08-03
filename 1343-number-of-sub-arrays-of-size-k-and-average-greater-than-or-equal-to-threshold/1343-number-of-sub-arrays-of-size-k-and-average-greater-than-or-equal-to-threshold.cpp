class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0,cnt=0;
        for(int i = 0 ; i < k ; i++)
        {
            sum+=arr[i];
        }
        if(sum/k >= threshold)
        cnt++;
        int l = 0  , r = k - 1 ;
        for(int i = k ; i < arr.size() ; i++)
        {
            sum-=arr[l];
            l++;
            r++;
            sum+=arr[r];
            if(sum/k>=threshold)
            cnt++;
        }
        return cnt;
    }
};