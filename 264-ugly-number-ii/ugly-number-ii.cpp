class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly(n,0);
        ugly[0]=1;
        int p2=0,p3=0,p5=0;
        for(int i=1;i<n;i++){
            int next2 = ugly[p2]*2;
            int next3 = ugly[p3]*3;
            int next5 = ugly[p5]*5;
            int next = min({next2,next3,next5});
            ugly[i] = next;
            if(next2==next) p2++;
            if(next3==next) p3++;
            if(next5==next) p5++;
        }
        return ugly[n-1];
    }
};