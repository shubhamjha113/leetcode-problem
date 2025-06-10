class Solution {
public:
    void solve(int ind,int n , vector<string> &ans,string output){
        if(ind == n){
            ans.push_back(output);
            return;
        }
        //add 1 in any case
        solve(ind+1,n,ans,output+'1');
        //for adding zero 
        if(output.empty() || output.back()=='1'){
            solve(ind +1,n,ans,output+'0');
        }
    }

    vector<string> validStrings(int n) {
        vector<string> ans;
        string output="";
        solve(0,n,ans,output);
        return ans;
    }
};