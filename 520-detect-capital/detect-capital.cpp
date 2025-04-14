class Solution {
public:
    bool isLarge(string l){
        for(char &ch:l){
            if(ch<'A'||ch>'Z'){
                return false;
            }
        }
        return true;
    }
    bool isSmall(string s){
        for(char &ch:s){
            if(ch<'a'||ch>'z'){
                return false;
            }
        }
        return true;
    }
    bool detectCapitalUse(string word) {
        int n = word.size();
        string str=word.substr(1,n);

        if(isSmall(word) || isLarge(word) || (isSmall(word.substr(1,n)) && isupper(word[0])) ){
            return true;
        }
        return false;
    }
};