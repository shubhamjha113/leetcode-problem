class Solution {
public:
int res = INT_MAX;
int n;
void solve(int idx,vector<int> &children,vector<int>& cookies, int k){
    if(idx>=n){
        int unfair = *max_element(children.begin(),children.end());
        res = min(res,unfair);
        return;
    }
    for(int i=0;i<k;i++){
        children[i] += cookies[idx];
        solve(idx+1,children,cookies,k);
        children[i] -= cookies[idx];
    }
}
int distributeCookies(vector<int>& cookies, int k) {
    n = cookies.size();
    vector<int> children(k,0);
    solve(0,children,cookies,k);
    return res;    
}
};