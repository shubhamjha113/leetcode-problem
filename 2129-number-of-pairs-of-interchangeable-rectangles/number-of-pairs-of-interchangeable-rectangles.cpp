class Solution {
public:
//    int gcd(int a,int b){
//     return b==0?a : (b,a%b);
//    }
    pair<int,int> reduced(int num,int den){
        int x = gcd(num,den);
        num/= x;
        den /= x;
        return {num,den};
    }
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        map<pair<int,int>,int> mp;
        long long ans=0;
        for(auto &i:rectangles){
            pair<int,int> p = reduced(i[0],i[1]);
            ans += mp[p];
            mp[p]++;
        }
        return ans;
    }
};