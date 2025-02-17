class Solution {
public:
    int beautySum(string s) {
        int res = 0;
        
        for (int i = 0; i < s.size(); i++) {
            map<char, int> mpp;
            for (int j = i; j < s.size(); j++) {
                mpp[s[j]]++;
                if (j - i >= 2) {   //if sunstring length is minimum 3 then we cheak otherwise beauty is zero 
                    int maxfreq = 0;
                    int minfreq = INT_MAX;
                    
                    for (auto it : mpp) {
                        maxfreq = max(maxfreq, it.second);
                        minfreq = min(minfreq, it.second);
                    }
                    
                    res += (maxfreq - minfreq);
                }
            }
        }
        
        return res;
    }
};