class Solution {
public:
    int minimumLength(string s) {
        int l=0,r=s.size()-1;
        while(l < r && s[l] == s[r]){
            char ch = s[l];
            while(s[l]==ch && l<=r) l++;
            while(s[r]==ch && l<=r) r--;
        }
        return r-l+1;
    }
};