class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> store(26,0);
        int count = 0;
        for(char ch: brokenLetters) store[ch-'a'] = 1;
        bool broken = true;
        for(int i=0;i<=text.size();i++){
            if(i<text.size() && text[i] != ' '){
                if(store[text[i]-'a']) broken = false;
            }
            else{
                if(broken) count++;
                broken = true;
            }
        }
        return count;
    }
};