class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int count=0;
        for(char &ch:word){
            if(isupper(ch)) count++;
        }
        if(count==0 || count==n) return true;
        if(count==1 && isupper(word[0])) return true;
        return false;
    }
};