class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int s=0,e=n-1;
        int mid = s + (e-s)/2;
        if(arr[e]-e-1 == 0) return e+k+1;
        while(s<=e){
            if(arr[mid] - mid - 1 < k){
                s= mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s + (e-s)/2;
        }
        return k+s;
    }
};