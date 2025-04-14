class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int m = searchWord.size();
       stringstream ss(sentence);
       int count=1;
       string token="";
       int i=0;
        while(ss>>token){
            while(i<m){
                if(token[i]==searchWord[i]){
                    i++;
                }
                else{
                    count++;
                    break;
                }
                if(i==m) return count;
            }
        }
        return -1; 
    }
};