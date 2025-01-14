class Solution {
public:
    bool isPos(vector<int>& nums, int k,int mid){
        int sum=0;
        int count=1;
        for(int i=0;i<nums.size();i++){
            if(sum + nums[i]<= mid){
                sum += nums[i];
            }
            else{
                count++;
                sum=nums[i];
            }
            if(count>k || nums[i]> mid) return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int s=0,e=0;
        for(int i=0;i<nums.size();i++){
            e += nums[i];
            s=max(s,nums[i]);
        }
 
        int ans=-1;
        while(s<=e){
           int mid=s+(e-s)/2;
            if(isPos(nums,k,mid)){
                ans= mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
      return ans; 
    }
};