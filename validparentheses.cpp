class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++){
            if (st.empty() && ( s[i] == ')'  || s[i] == '}' || s[i] == ']' )) return false;
            
            if (s[i] == '('  || s[i] == '{' || s[i] == '[') st.push(s[i]);
            
            if (!st.empty() && ( s[i] == ')'  || s[i] == '}' || s[i] == ']' )){
                switch (s[i]){
                    case ')':
                        if (st.top() == '(') st.pop();
                        else return false;
                        break;
                    case '}':
                        if (st.top() == '{') st.pop();
                        else return false;
                        break;
                    case ']':
                        if (st.top() == '[') st.pop();
                        else return false;
                        break;
                }
            }
        }
        return st.empty();
    }
};
