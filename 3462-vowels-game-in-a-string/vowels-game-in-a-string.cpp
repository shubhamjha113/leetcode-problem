class Solution {
public:
    bool doesAliceWin(string s) {
        string vowel = "aeiou";
        for(int i=0;i<s.size();i++){
            if(vowel.find(s[i]) != string::npos){
                return true;
            }
        }
        //if(count==0) return false;
        //if(count & 1) return true;
        return false;
    }
};