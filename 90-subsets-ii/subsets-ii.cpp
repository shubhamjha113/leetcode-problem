class Solution {
private:

void solve(vector<int>& nums,vector<vector<int>> &ans,vector<int> &temp,int i)
{
    if(i == nums.size() ){
       ans.push_back(temp);
       return; 
    }
    else{
        temp.push_back(nums[i]);
        solve(nums,ans,temp,i+1);
        temp.pop_back();

        while(i+1 < nums.size() && nums[i] == nums[i+1]) i++;
        solve(nums,ans,temp,i+1);

    }




    // ans.push_back(temp);
    //  for(int i=index;i<nums.size();i++){
    //    if(i != index && nums[i] == nums[i-1]) continue;

    //    temp.push_back(nums[i]);
    //    solve(nums,ans,temp,i+1);
    //    temp.pop_back();
    //  }

}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        solve(nums,ans,temp,0);
        return ans;
    }
};