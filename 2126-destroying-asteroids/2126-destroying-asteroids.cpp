class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
       double z = mass;
        for(int i = 0 ; i < asteroids.size() ; i++)
        {
            if(z >= asteroids[i])
            {
                z += asteroids[i];
            }
            else 
            return false;
        }
        return true;
    }
};