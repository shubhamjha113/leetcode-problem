class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> tt;
        for(int i=0;i<s.size();i++){
            if(s[i] !='#'){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }               
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i] !='#'){
                tt.push(t[i]);
            }
            else{
                if(!tt.empty()){
                    tt.pop();
                }  
            }
        }
        
        return st==tt;
    }
};