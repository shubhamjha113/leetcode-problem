class Solution {
public:
    bool f(string temp,string target){
        vector<bool> store(26,0);
        for(char ch: target){
            store[ch-'a'] = 1;
        }
        for(char c:temp){
            if(store[c-'a'] ){
                return false;
            }
        }
        return true;
    }
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        int n = text.size(),i =0;
        while(i<n){
            string temp;
            while(i < n &&  text[i] != ' '){
                temp += text[i];
                i++;
            }
            if(f(temp,brokenLetters)){
                count++;
            }
            i++;
        }
        return count;
    }
};