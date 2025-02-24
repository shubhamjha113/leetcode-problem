class Solution {
typedef vector<int> p;
private:
void solve(p &nums, vector<p> &ans,int index){
    //base case
    if(index>=nums.size()){
        ans.push_back(nums);
        return;
    }
    vector<bool> used(21,0);
    for(int j=index;j<nums.size();j++){
        if(used[nums[j]+10]==0){
        swap(nums[index],nums[j]);
        solve(nums,ans,index+1);
        //backtracing
        swap(nums[index],nums[j]);
        used[nums[j]+10] = 1;
        }
    }
}



public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<p> ans;
        int index =0;
        solve(nums,ans,index);
       
        return ans;
    }
};