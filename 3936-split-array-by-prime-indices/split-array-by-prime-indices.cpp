class Solution {
public:
    bool isPrime(int x){
        if(x<=1) return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }
        return true;
    }
    long long splitArray(vector<int>& nums) {
        long long sumA=0,sumB=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(isPrime(i)){
                sumA += nums[i];
            }
            else{
               sumB += nums[i]; 
            }
        }
        return abs(sumA-sumB);
    }
};