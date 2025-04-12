class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if(n==1 || n==2) return n;
        int p = ceil(log2(n+1));
        return pow(2, p);
    }
};