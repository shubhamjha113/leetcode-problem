class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s+s;
        string sub= s2.substr(1,s2.size()-2);
        return sub.find(s) != string::npos;


    }
};