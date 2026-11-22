class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char bracket : s){
            if (bracket == '(' or bracket == '{' or bracket == '['){
                st.push(bracket);
            }
            else {
                if (st.empty()){
                    return false;
                }
                char curr = st.top();
                st.pop();
                if (curr == '(' and bracket != ')'){
                    return false;
                }
                if (curr == '[' and bracket != ']'){
                    return false;
                }
                if (curr == '{' and bracket != '}'){
                    return false;
                }
            }
        }
        return st.empty();
    }
};