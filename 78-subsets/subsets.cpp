class Solution {
typedef vector<int> p;
public:
void solve(p& nums,p output,int index , vector<p> &ans)
{
    //base case
    if(index >=nums.size()){
        ans.push_back(output);
        return;
    }
    //exclude
    solve(nums,output,index+1,ans);
    //include
    int element = nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);

}



    vector<vector<int>> subsets(vector<int>& nums) {
        vector<p> ans;
        p output;
        int index=0;
        solve(nums,output,index,ans);
        return ans;
    }
};