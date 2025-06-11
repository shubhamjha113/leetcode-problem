class Solution {

private:
void solve(vector<int> &candidates,int target,int index,int n,vector<vector<int>> &ans,vector<int> &temp)
{
    //base case
    if(index==n){
        if(target==0){
            ans.push_back(temp);
        }
        return;
    }

    //exclude
    solve(candidates,target,index+1,candidates.size(),ans,temp);

    //include
    if(candidates[index]<=target){
        temp.push_back(candidates[index]);
        solve(candidates,target-candidates[index],index,candidates.size(),ans,temp);
        temp.pop_back();
    }
}

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates,target,0,candidates.size(),ans,temp);
        return ans;    
    }
};