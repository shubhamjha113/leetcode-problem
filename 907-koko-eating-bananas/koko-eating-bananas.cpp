class Solution {
public:
    bool isPos(vector<int>& piles, int h,int n , int mid) {
        int sum = 0;  
        for (int pile : piles) {
           
            sum += (pile + mid - 1) / mid; 
            if (sum > h) return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int s=1;
        int maxi = -1;
        for(int i=0;i<n;i++){
            maxi = max(maxi , piles[i]);
        }
        int e=maxi;
        int mid=s + (e-s)/2;
        int ans  = -1;
        while(s<=e){
            if(isPos(piles,h,n,mid)){
                ans=mid;
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