class Solution {
public:
    bool isValid(string s) {
        vector<char> st;
        for(char c :  s){
            if(c == '(' || c == '[' || c == '{'){
            st.push_back(c);
            }
            else{
                if (st.empty()) return false;
                char temp = st.back();
                st.pop_back();
                if(c==')' && temp != '(') return false;
                if(c==']' && temp != '[') return false;
                if(c=='}' && temp != '{') return false;
            }
        }
        return st.empty();        
    }
};