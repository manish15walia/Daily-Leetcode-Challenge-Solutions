/* https://leetcode.com/problems/valid-parentheses/description/ */

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(char c : s){
            if(c==')' && !st.empty() && st.top()=='('){
                st.pop();
            }
            else if(c=='}' && !st.empty() && st.top()=='{'){
                st.pop();
            }
            else if(c==']' && !st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        return st.empty();
    }
};
