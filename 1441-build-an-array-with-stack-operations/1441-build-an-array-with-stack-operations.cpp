class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        stack<int>s;
        int j = 0,t=0,i=1;
            while(t<target.size()&&i<=n){
                t+=1;
                s.push(i);
                ans.push_back("Push");
                if(i==target[j]){
                j++;
                }
                else
                {
                    s.pop();
                    t-=1;
                    ans.push_back("Pop");
                }
                i+=1;
            }
            
        
        return ans;
    }
};