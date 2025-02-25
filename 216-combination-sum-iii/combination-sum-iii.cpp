class Solution {
private:
void solve(int k,int n,vector<vector<int>> &ans,vector<int> &temp,int index)
{
    if(k==0){
        if(n==0){
           ans.push_back(temp); 
        }
        return;
    }
    for(int i=index;i<=9;i++){
        if(n-i>=0){
            temp.push_back(i);
            solve(k-1,n-i,ans,temp,i+1);
            temp.pop_back();
        }
    }
}

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(k,n,ans,temp,1);
        return ans;
    }
};