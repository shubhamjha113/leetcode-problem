class Solution {
typedef vector<int> p;
private:
void solve(p &candidates,int target,int index,vector<p> &ans,p &temp)
{
    //base case
        if(target<0) return;
    
        if(target==0){
            ans.push_back(temp);
            return;
        }
    
    for(int j=index;j<candidates.size();j++){
        if(j > index && candidates[j] == candidates[j - 1]) continue; 
        
            temp.push_back(candidates[j]);
            solve(candidates,target-candidates[j],j+1,ans,temp);
            temp.pop_back();
    }
    
    
}



public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       vector<p> ans;
        p temp;
        sort(begin(candidates),end(candidates));
        solve(candidates,target,0,ans,temp);
        return ans;    
    }
};