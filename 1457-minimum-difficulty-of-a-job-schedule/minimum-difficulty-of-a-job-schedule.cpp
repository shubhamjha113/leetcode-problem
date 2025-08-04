class Solution {
public:
    int t[301][11];
    int solve(vector<int> &jd, int n , int idx,int d){
        if(d==1){
            return *max_element(jd.begin()+idx, jd.end());
        }
        if(t[idx][d] != -1) return t[idx][d];

        int maxi = INT_MIN;
        int result = INT_MAX;
        for(int i = idx;i<=n-d;i++){
            maxi = max(maxi , jd[i]);
            result = min(result , maxi+solve(jd,n,i+1,d-1));
        }
        return t[idx][d] = result;
    }
    int minDifficulty(vector<int>& jd, int d) {
        int n = jd.size();
        if(n<d) return -1;
        memset(t,-1,sizeof(t));
        return solve(jd,n,0,d);
    }
};