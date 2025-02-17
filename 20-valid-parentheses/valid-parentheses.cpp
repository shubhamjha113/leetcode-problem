class Solution {
public:
    bool isValid(string s) {
    if(s.size() <= 1) return false;
      stack<char> st;
      int i=0,count=1;
      while(i<s.size()){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else if(s[i]==')' || s[i]==']' || s[i]=='}'){
            if(st.empty()) return false;

            char c = st.top();
            if(s[i]==')'){
                if(c=='('){
                    count=1;
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]==']'){
                if(c=='['){
                    count=1;
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
               if(c=='{'){
                    count=1;
                    st.pop();
                }
                else{
                    return false;
                } 
            }
        }
        i++;
      }
      if(!st.empty()) return false;
      return count==1;  
    }
};