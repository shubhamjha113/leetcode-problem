class Solution {
public:
    void solve(int n , vector<string> &ans,string &op,int L,int R){
        if(L+R == 2*n) {
            ans.push_back(op);
            return;
        }
        //left
        if(L < n){
            op.push_back('(');
            solve(n,ans,op,L+1,R);
            op.pop_back();
        }

        if(L>R){
            op.push_back(')');
            solve(n,ans,op,L,R+1);
            op.pop_back();
        }
    }



    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string op = "";
        solve(n,ans,op,0,0);
        return ans;
    }
};