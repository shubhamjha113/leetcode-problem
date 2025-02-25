class Solution {
private:
void solve(int k,int n,vector<int> &arr,vector<vector<int>> &ans,vector<int> temp,int index,int size)
{
    //base case 
    if(n==0 && temp.size()==k){
        ans.push_back(temp);
        return;
    }

    if(n<0 || index == size || temp.size()==k){
        return;
    }

    temp.push_back(arr[index]);
    solve(k,n-arr[index],arr,ans,temp,index+1,size);
    temp.pop_back();

    solve(k,n,arr,ans,temp,index+1,size);


}

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> temp;
        solve(k,n,arr,ans,temp,0,9);
        return ans;
    }
};