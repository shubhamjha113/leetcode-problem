class Solution {
public:
    long long solve(int l,int r){
        long long L = 1;
        long long S=1;
        long long steps = 0;
        while(L <= r){
            long long R = 4*L-1;
            long long start = max(L,(long long)l);
            long long end = min(R,(long long)r);
            if(start <= end){
                steps += (end -start +1 )*S;
            }
            L = L*4;
            S++;
        }
        return steps;
    }


    long long minOperations(vector<vector<int>>& queries) {
        long long ans = 0;
        for(auto &query:queries){
            int l=query[0];
            int r=query[1];
            long long steps = solve(l,r);
            ans += (steps+1)/2;
        }
        return ans;
    }
};