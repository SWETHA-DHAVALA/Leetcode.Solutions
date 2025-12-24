class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0;
        for(auto a:apple)
        {
            sum+=a;
        }
        sort(capacity.begin(),capacity.end());
        reverse(capacity.begin(),capacity.end());
        int cnt = 0;
        int a=0;
        for(int i= 0 ; i < capacity.size();i++)
        {
            a+=capacity[i];
            cnt++;
            if(a>=sum)
            {
                break;
            }    
                }
            return cnt;
    }
};