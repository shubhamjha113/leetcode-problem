class Solution {


long long power(long long x,long long y)
{
    if(y==0) return 1;
    long long ans=power(x,y/2);
    ans *= ans;
    ans%=1000000007;
    if(y%2){
        ans *=x;
        ans %=1000000007;
    }
    return ans;
}
public:
    int countGoodNumbers(long long n) {
        long long odd = n/2;
        long long even = n/2 + n%2;
        return (power(5,even)*power(4,odd))%1000000007;
    }
};