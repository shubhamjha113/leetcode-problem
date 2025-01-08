class Solution {
public:
    int searchInsert(vector<int>& arr, int k) {
           int n=arr.size();
        int ans = -1;
        int s=0,e=n-1;
        int mid ;
        while(s<=e){
            mid = s + (e-s)/2;
            if(arr[mid] > k){ 
                e = mid-1;
            }    
            else{
                if(arr[mid] == k){
                    return mid;
                }
                ans=mid;
                s = mid+1;
            }    
            
        }
        
        return ans+1;
    }
};