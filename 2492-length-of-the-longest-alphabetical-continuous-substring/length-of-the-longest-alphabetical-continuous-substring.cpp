class Solution {
public:
    int longestContinuousSubstring(string s) {
        int maxi = 0,count = 1;
        if(s.size()==1) return 1;
        for(int i = 0;i<s.size()-1;i++){
            if(s[i]-'a'+1 == s[i+1]-'a'){
                count++;
            }
            else{
                count = 1;
            }
            maxi = max(maxi,count);
        }
        return maxi;
    }
};