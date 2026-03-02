class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int sum = 0;
        int m = 0 , k = piles.size()-2;
        // for(int i = 0 ; i < piles.size() ; i++)
        // {

        // }
        while(m<=k)
        {
            sum+=piles[k];
            k-=2;
            m+=1;
        }
        return sum;
    }
};