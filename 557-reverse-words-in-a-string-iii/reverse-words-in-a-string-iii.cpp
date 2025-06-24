class Solution {
public:
    string reverseWords(string s) {
        int l=0,r=0;
        int i=0,n = s.size();
        while(i<n){
            while(s[i] != ' ' && r<n){
                r++;
                i++;
            }
            reverse(s.begin()+l,s.begin()+r);
            l=i+1,r=i+1;
            i++;
        }
        return s;
    }
};