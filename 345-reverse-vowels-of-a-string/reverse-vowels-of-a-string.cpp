class Solution {
public:
    string reverseVowels(string s) {
        int i = 0,j=s.size()-1;
        string vowel = "AEIOUaeiou";
        while(i<j){
            while(i<j && vowel.find(s[i])==string::npos) i++;
            while(i<j && vowel.find(s[j])==string::npos) j--;
            swap(s[i],s[j]);
            i++,j--;
        }
        return s;
    }
};