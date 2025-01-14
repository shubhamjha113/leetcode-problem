class Solution {
public:
    bool minDivisor(vector<int>& nums, int threshold,int mid){
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += (nums[i] + mid -1)/mid;
            if(sum>threshold){
                return false;
            }
        }
        return true;
    }


    int smallestDivisor(vector<int>& nums, int threshold) {
        int s=1;
        int e=*max_element(nums.begin(),nums.end());
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(minDivisor(nums,threshold,mid)){
                ans= mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid = s + (e-s)/2;
        }
      return ans;  
    }
};