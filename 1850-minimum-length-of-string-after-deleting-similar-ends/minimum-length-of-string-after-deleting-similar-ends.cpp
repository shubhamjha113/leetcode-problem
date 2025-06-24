class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int l=0,r=n-1;
        while(l < r && s[l] == s[r]){
            char ch = s[l];
            while(s[l]==ch && l<=r) l++;
            while(s[r]==ch && r>=l) r--;
        }
        return r-l+1;
    }
};