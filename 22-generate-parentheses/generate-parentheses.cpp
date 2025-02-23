class Solution {
private:
void solve(int n , vector<string> &ans,string output,int L,int R)
{
    //base case
    if(L==n && R==n){
        ans.push_back(output);
        return;
    }

    //add left
    if(L<n){
        output.push_back('(');
        solve(n,ans,output,L+1,R);
        output.pop_back();
    }
    if(R<L){
       output.push_back(')');
        solve(n,ans,output,L,R+1);
        output.pop_back();
    } 
    
}
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string output = "";
        solve(n,ans,output,0,0);
        return ans;
    }
};