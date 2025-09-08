class Solution {
public:
    bool isZero(int x){ 
        while(x>0){
            int digit = x%10;
            x/=10;
            if(digit==0) return true;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        int a = 1;
        int b = n-1;
        while(isZero(a) || isZero(b)){
            a++;
            b--;
        }
        return {a,b};
    }
};