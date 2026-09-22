class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> q1;
        queue<int> q2;
        int n = senate.size();
        for(int i = 0 ; i < n ; i++)
        {
            if(senate[i]=='R')
            q1.push(i);
            else
            q2.push(i);
        }
        while(!q1.empty() && !q2.empty())
        {
            int f1 = q1.front();
            int f2 = q2.front();
            if(f1>f2) 
            {
                q1.pop();
                q2.pop();
                q2.push(f2+n);
            }
            else
            {
                q2.pop();
                q1.pop();
                q1.push(f1+n);
            }

        }
        if(q1.empty())
        return "Dire";
        else
        return "Radiant";
    }
};