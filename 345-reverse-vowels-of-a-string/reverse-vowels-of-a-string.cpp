class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U'){
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        vector<char> vowel;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                vowel.push_back(s[i]);
                s[i]='$';
            }
        }
        reverse(vowel.begin(),vowel.end());
        int first = 0,second=0;
        while(second<vowel.size() && first<s.size()){
            if(s[first]=='$'&& first < s.size()){
                s[first] = vowel[second];
                second++;
            }
            first++;
        }
        return s;
    }
};