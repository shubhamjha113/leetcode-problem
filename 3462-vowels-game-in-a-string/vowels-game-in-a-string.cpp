class Solution {
public:
    bool doesAliceWin(string s) {
        string vowel = "aeiou";
        int count = 0;
        for(int i=0;i<s.size();i++){
            if(vowel.find(s[i]) != string::npos){
                count++;
            }
        }
        if(count==0) return false;
        //if(count & 1) return true;
        return true;
    }
};