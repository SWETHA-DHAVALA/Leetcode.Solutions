class Solution {
public:
 
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        // sort(arr2.begin(),arr2.end());
        int cnt = 0;
     
        for(int i = 0 ; i < arr1.size() ; i++)
        {
               int found = 0;
            for(int j = 0 ; j < arr2.size() ; j++)
            {
                if(abs(arr1[i]-arr2[j])<=d ){
                 found = 1 ;
                 break;
                }
            }
            if(found==0)
            cnt++;
        }
        return cnt;
    }
};