
class Solution {
public:
    int len(int num)
    {
        int len = 0;
        while(num!=0)
        {
            len++;
            num/=10;
        }
        return len;
    }
    int maximum69Number (int num) {
        int n = len(num);
        vector<int>arr;
        while(num != 0)
        {
            arr.push_back(num % 10);
            num/=10;
        }
        reverse(arr.begin(),arr.end());
        for(int i = 0 ; i < n;i++)
        {
            if(arr[i] == 6){
            arr[i]+=3;
            break;
            }
        }
        int sum = 0;
        for(int i = 0 ; i < n; i++)
        {
            sum = sum*10 + arr[i];
        }
        return sum;
    }
};