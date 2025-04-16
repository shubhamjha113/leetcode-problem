class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string s1;
    for (string& word : words) {
        s1 += word;
        if (s1 == s) return true;
        if (s1.size() > s.size()) return false;
    }
    return false;
    }
};