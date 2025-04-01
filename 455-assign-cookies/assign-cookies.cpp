class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size(),m = s.size();
        sort(begin(g),end(g));
        sort(begin(s),end(s));
        int l=0,r=0;
        while(l<m && r<n){
            if(g[r] <= s[l]){
                r++;
            }
            l++;
        }
        return r;
    }
};