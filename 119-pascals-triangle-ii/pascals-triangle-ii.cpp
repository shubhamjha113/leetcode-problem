class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1,1);
        //use this C(n,k)=C(n,k-1)*(n-k+1)/k
        long long prev=1;

        for(int i=1; i<=rowIndex; i++){
            prev=prev*(rowIndex-i+1)/i;
            ans[i]=prev;
        }
        return ans;
    }
};