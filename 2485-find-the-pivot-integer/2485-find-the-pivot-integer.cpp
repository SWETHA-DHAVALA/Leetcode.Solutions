class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1)
        return 1;
        int m = (n*(n+1))/2;
        int root = sqrt(m);
        if(pow(root,2)==m)
        return root;
        else
        return -1;

    }
};