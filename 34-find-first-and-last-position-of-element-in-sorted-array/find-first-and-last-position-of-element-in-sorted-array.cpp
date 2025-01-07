class Solution {

           
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> answer;
        int n= nums.size();
        int left = -1,right = -1;
        int s=0,e=n-1;
        int mid = s+ (e-s)/2;
        while(s<=e){
            if(nums[mid] == target){
                left = mid;
                e = mid-1;
            }
            else if(target> nums[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s+ (e-s)/2;
        }

        s=0,e=n-1;
        mid = s+ (e-s)/2; 
        while(s<=e){
            if(nums[mid] == target){
                right = mid;
                s = mid+1;
            }
            else if(target> nums[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s+ (e-s)/2;
        }

        answer.push_back(left);
        answer.push_back(right);
        return answer;
    } 
};