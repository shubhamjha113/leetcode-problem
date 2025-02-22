class Solution {
typedef vector<string> p;
private:

void solve(string output, int index, int n, p &ans) {
        // Base Case: If the string length reaches n, store it
        if (index == n) {
            ans.push_back(output);
            return;
        }

        // Include '1' in any case
        solve(output + '1', index + 1, n, ans);

        // Include '0' only if the previous character was '1' or it's the first character
        if (index == 0 || output.back() == '1') {
            solve(output + '0', index + 1, n, ans);
        }
    }


public:
    vector<string> validStrings(int n) {
        p ans;
        string output = "";
        solve(output, 0, n, ans);
        return ans;
    }
};