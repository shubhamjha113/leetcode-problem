class Solution {
public:
    bool isPos(vector<int>& weights, int days,int mid){
       int sum = 0;
       int count=1;
       for(int i=0;i<weights.size();i++){
            if(sum + weights[i] > mid){
                count++;
                sum =weights[i];
                if(count> days) return false; 
            }
            else{
                sum += weights[i];     
            }
       } 
       return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int summ=0,maxi = -1;
        for(int i=0;i<weights.size();i++){
            summ += weights[i];
            maxi=max(maxi,weights[i]);
        }

        int s=maxi,e=summ;
         
        int ans=-1;
        while(s<=e){
           int mid=s+(e-s)/2;
            if(isPos(weights,days,mid)){
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