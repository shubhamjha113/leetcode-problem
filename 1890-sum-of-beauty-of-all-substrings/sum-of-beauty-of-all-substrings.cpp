class Solution {
public:
    int beautySum(string s) {
        int res = 0;
        
        for (int i = 0; i < s.size(); i++) {
            map<int,int> count;
            for (int j = i; j < s.size(); j++) {
                count[s[j]-'a']++; 
                    int maxfreq = 0;
                    int minfreq = INT_MAX;
                    
                    for (auto k :count) {
                            maxfreq = max(maxfreq, k.second);
                            minfreq = min(minfreq, k.second);
                    }
                    
                    res += (maxfreq - minfreq);
                
            }
        }
        
        return res;
    }
};