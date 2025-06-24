class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n =arr.size();
        sort(arr.begin(),arr.end());
        int l=0,r =n-1;
        int ind =0;
        int mid = arr[r/2];
        vector<int> ans(k);
        while(ind<k){
            int left = abs(arr[l]-mid);
            int right = abs(arr[r]-mid);
            if(left<=right){
                ans[ind] = arr[r];
                r--;
            }
            else{
                ans[ind] = arr[l];
                l++;
            }
            ind++;
        }
        return ans;
    }
};