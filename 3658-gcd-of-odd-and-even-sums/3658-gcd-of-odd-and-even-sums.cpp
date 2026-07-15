int gcd(int a , int b)
{
    while(b != 0)
        {
            int temp = b;
            b = b % a;
            a = temp;
        }
    return a;
}
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n==1)
            return 1;
        int even = n * (n+1);
        int odd = n * n;
        int result = gcd(odd,even);
        return result;
    }
};