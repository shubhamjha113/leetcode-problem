class Solution {
public:
    string reversePrefix(string word, char ch) {
        if(word.find(ch)==-1) return word;
        int i=0;
        while(word[i] != ch){
            i++;
        }
        reverse(word.begin(),word.begin()+i+1);
        return word;
    }
};