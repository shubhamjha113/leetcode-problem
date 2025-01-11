class Solution {
public:
    int mySqrt(int n) {
       int s=0,e=n;
       int ans=-1;
      
       while(s<=e){
            int mid=s+ (e-s)/2;
           long long int sq =(long long) mid*mid;
           if(sq==n) return mid;
           if(sq > n){
               e=mid-1;
           }
           else{
               ans=mid;
               s=mid+1;
           }
       }
       return ans;
    }
};