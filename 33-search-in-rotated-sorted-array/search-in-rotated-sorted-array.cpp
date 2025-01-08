class Solution {
public:
    int findMin(vector<int>& nums) {
       int s=0,e=nums.size()-1;
       int mid = s + (e-s)/2;
       while(s<e){
        if(nums[mid] > nums[e]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s + (e-s)/2;
       }
       return s;
    }
    int binarySearch(vector<int>& nums,int s,int e, int target) {
        int n=nums.size();
        
        int mid = s + ((e-s)/2);
        while(s<=e){
            if(nums[mid] == target){
                return mid;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s + ((e-s)/2);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = findMin(nums);
        if(target >= nums[pivot] && target <= nums[n-1]){
            return binarySearch(nums,pivot,n-1,target);
        }
        else{
            return binarySearch(nums,0,pivot-1,target);
        }
    }
};