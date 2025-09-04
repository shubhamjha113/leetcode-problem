class Solution {
public:
    bool f(string &s){
        int n = s.size();
        string vowel = "aeiou";
        if(vowel.find(s[0]) != string::npos && vowel.find(s[n-1]) != string::npos){
            return true;
        }
        return false;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for(int i=left;i<=right;i++){
            string w = words[i];
            if(f(w)){
                count++;
            }
        }
        return count;
    }
};