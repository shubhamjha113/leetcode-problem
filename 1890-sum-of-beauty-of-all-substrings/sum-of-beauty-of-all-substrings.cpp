class Solution {
public:
    int beautySum(string s) {
        int res = 0;
        
        for (int i = 0; i < s.size(); i++) {
            vector<int> count(26,0);
            for (int j = i; j < s.size(); j++) {
                count[s[j]-'a']++; 
                    int maxfreq = INT_MIN;
                    int minfreq = INT_MAX;
                    
                    for (int k=0;k<26;k++) {
                        if(count[k]>0){
                             maxfreq = max(maxfreq, count[k]);
                            minfreq = min(minfreq, count[k]);
                        }
                    }
                    
                    res += (maxfreq - minfreq);
                
            }
        }
        
        return res;
    }
};