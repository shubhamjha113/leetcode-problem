class Solution {
public:
    bool isPos(vector<int>& weights, int days,int mid){
       int sum = 0;
       int count=1;
       for(int i=0;i<weights.size();i++){
            if(weights[i] > mid) return false;
            if(sum + weights[i] <= mid){
                sum += weights[i];
            }
            else{
                count++;
                sum =weights[i];
                 
            }
             if(count> days) return false; 
            
       } 
       return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int s=0,summ=0;
        for(int i=0;i<weights.size();i++){
            summ += weights[i];
        }

        int e=summ;
         
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