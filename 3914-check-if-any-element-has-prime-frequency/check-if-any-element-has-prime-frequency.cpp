class Solution {
public:
    bool isPrime(int x){
        for(int i=2;i<=x/2;i++){
            if(x%i==0) return false;
        }
        return true;
    }
    
    bool checkPrimeFrequency(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int &it:nums){
            mp[it]++;
        }

        for(auto &it:mp){
            if(it.second>1){
                if(isPrime(it.second)) return true;
            }
        }
        return false;
    }
};