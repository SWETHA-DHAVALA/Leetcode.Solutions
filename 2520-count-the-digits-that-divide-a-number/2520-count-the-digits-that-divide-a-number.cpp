class Solution {
public:
    int countDigits(int num) {
        int m = num;
        int cnt = 0,rem;
        while(num>0)
        {
            rem = num % 10;
            if(m%rem==0)
            cnt++;
            num/=10;
        }
        return cnt;

    }
};