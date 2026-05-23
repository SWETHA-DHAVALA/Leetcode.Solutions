class Solution {
public:
    bool isPalindrome(int x) {
        // int m = x;
        // string s = to_string(x);
        //  reverse(s.begin(),s.end());
        // int rev = stoi(s);
        // if(m==rev)
        // return 1;
        // else
        // return 0;
        int m = x;
        double rem , sum = 0 ;
        while(x > 0)
        {
            rem = x % 10;
            sum = sum * 10 + rem;
            x/=10;
        }
        if(m==sum)
        return 1;
        else
        return 0;
    }
};