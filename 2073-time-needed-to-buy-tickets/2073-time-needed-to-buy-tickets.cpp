class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int cnt = 0;
        int i=0;
        int n = tickets.size();
        for(int i = 0 ; i < n ; i++)
        {
            q.push(i);
        }
        int front ;
        while(tickets[k]>0)
        {
            int front = q.front();
           q.pop();
           tickets[front] -= 1;
           if(tickets[front]>0)
           q.push(front);
           cnt+=1;
        }
        return cnt;
    }
};