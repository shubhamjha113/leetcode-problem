class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size()<=1){
            return s;
        }
        string ans="";
        stack<char> st;
        
        
        for(char ch:s){
            if(!st.empty() && ch==st.top()){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }

        while(!st.empty()){
            
            ans +=st.top();
            st.pop();
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};