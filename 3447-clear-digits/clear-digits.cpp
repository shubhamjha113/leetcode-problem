class Solution {
public:
    string clearDigits(string s) {
        string ans="";
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                st.pop();
            }
            else{
                st.push(s[i]);
            }    
        }
        if(st.empty()) return ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};