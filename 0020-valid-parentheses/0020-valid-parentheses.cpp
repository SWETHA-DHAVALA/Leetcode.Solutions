class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        int top = -1;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                p.push(s[i]);
                top++;
            }
            else {
                if (top == -1)
                    return false;

                if ((s[i] == ')' && p.top() == '(') ||
                    (s[i] == '}' && p.top() == '{') ||
                    (s[i] == ']' && p.top() == '[')) {

                    p.pop();
                    top--;
                }
                else {
                    return false;
                }
            }
        }

        return top == -1;
    }
};