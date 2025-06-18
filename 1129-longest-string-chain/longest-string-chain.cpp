bool comp(string &s1 , string &s2){
    return s1.size() < s2.size();
};

class Solution {
public:
    bool compare(string &longer, string &shorter) {
    if (longer.size() != shorter.size() + 1) return false;

    int i = 0, j = 0;
    bool skipped = false;

    while (i < longer.size()) {
        if (j < shorter.size() && longer[i] == shorter[j]) {
            i++;
            j++;
        } else {
            if (skipped) return false;
            skipped = true;
            i++; 
        }
    }

    return true;
}


    int longestStrChain(vector<string>& words) {
        int n = words.size();
        sort(words.begin(), words.end(), comp);
        vector<int> dp(n, 1);
        int maxi = 1;

        for(int i = 0; i < n; i++){
            for(int prev = 0; prev < i; prev++){
                if(compare(words[i], words[prev]) && dp[prev] + 1 > dp[i]){
                    dp[i] = dp[prev] + 1;
                }
            }
            maxi = max(maxi, dp[i]);
        }

        return maxi;
    }
};
