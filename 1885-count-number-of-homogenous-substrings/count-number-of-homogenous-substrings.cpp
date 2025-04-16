class Solution {
public:
    const long long MOD = 1000000007;
    int countHomogenous(string s) {
        long long length = 0;
        long long result = 0;

        for (int i = 0; i < s.length(); i++) {
            if (i > 0 && s[i] == s[i - 1]) {
                length += 1;
            } else {
                length = 1;
            }
            result = (result + length) % MOD;
        }

        return (int)result;
    }
};