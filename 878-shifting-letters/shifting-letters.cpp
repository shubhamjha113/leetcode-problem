class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.size();
        vector<long long> shiftBy(shifts.begin(),shifts.end());
        for(int i = n-2;i>=0;i--){
            shiftBy[i] = (shiftBy[i] + shiftBy[i+1])%26;
        }

        for(int i = 0;i<n;i++){
            s[i] = 'a' + (s[i]-'a' + shiftBy[i]) % 26;
        }
        return s;
    }
};