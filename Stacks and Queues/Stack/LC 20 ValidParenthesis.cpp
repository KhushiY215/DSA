class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        char t;
        for(char c:s){
            if(c=='[' || c=='{' || c=='('){
                st.push(c);
            }
            else{
                if(st.empty()) return false;
            t=st.top();
            st.pop();

            if((c==')' && t!='(') || (c=='}' && t!='{') ||(c==']' && t!='['))
            return false;
        }
        }
        return st.empty();
    }
};
