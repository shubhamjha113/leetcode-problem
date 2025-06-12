class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 && k==1) return 0;
        int len = pow(2,n-1);
        return (k<= len/2) ? kthGrammar(n-1,k) : !kthGrammar(n-1,k-len/2);
    }
};