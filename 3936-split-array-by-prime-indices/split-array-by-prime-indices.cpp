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
        vector<long long> vecA,vecB;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(isPrime(i)){
               vecA.push_back(nums[i]);
            }
            else{
               vecB.push_back(nums[i]);
            }
        }
        for(long long &i:vecA){
            sumA += i;
        }
        for(long long &i:vecB){
            sumB += i;
        }
        return abs(sumA-sumB);
    }
};