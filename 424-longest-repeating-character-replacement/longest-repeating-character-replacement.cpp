class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> hash(26,0);
        int l=0,r=0,maxlen=0,maxF=0;
        while(r<s.size()){
            hash[s[r]-'A']++;
            maxF  = max(maxF,hash[s[r]-'A']);
            if((r-l+1)-maxF >k){
                hash[s[l]-'A']--;
                maxF=0;
                l++;
            }
            maxlen = max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};