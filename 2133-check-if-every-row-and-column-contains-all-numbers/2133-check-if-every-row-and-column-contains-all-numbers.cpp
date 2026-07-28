class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
       
        int n = matrix.size();
        for(int i = 0 ; i < n ; i++)
        {
            set<int>s;
            for(int j = 0 ; j < n ; j++)
            {
                s.insert(matrix[i][j]);
            }
            if(s.size()!=n)
            return false;
            set<int>sp;
            for(int j = 0 ; j < n ; j++)
            {
                sp.insert(matrix[j][i]);
            }
            if(sp.size()!=n)
            return false;
        }
        return true;
    }
};