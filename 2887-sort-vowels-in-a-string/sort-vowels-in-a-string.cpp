class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowel;
        int n = s.size();
        string v = "aeiouAEIOU";
        for(int i = 0;i<n;i++){
            if(v.find(s[i]) != string::npos){
                vowel.push_back(s[i]);
                s[i] = '#';
            }
        }
        sort(vowel.begin(),vowel.end());
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                s[i] = vowel[j];
                j++;
            }
        }
        return s;
    }
};