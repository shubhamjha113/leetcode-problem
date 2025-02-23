class Solution {
typedef vector<string> p;
private:
void solve(int n , p &ans,string output,int L,int R)
{
    //base case
    if(L+R==2*n){
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
        p ans;
        string output = "";
        int L=0,R=0;
        solve(n,ans,output,L,R);
        return ans;
    }
};