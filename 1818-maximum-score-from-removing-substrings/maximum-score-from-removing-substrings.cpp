class Solution {
public:
    string removeSubstr(string &s , string &matchStr){
        stack<char> st;
        for(char &ch:s){
            if( ch==matchStr[1] && !st.empty() && st.top()==matchStr[0]){
                st.pop();
            }
            else st.push(ch);
        }
        string temp;
        while(!st.empty()){
            temp += st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
    int maximumGain(string s, int x, int y) {
        int n = s.size();
        int score = 0;
        string maxStr = (x>=y) ? "ab" : "ba";
        string minStr = (x<y) ? "ab" : "ba";

        string first_pass = removeSubstr(s,maxStr);
        int len = first_pass.size();
        int removedChar = n-len;
        score += (removedChar/2)*max(x,y);


        string second_pass = removeSubstr(first_pass,minStr);
        removedChar = len - second_pass.size();
        score += (removedChar/2)*min(x,y);

        return score;
    }
};