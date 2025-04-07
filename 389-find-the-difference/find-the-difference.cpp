class Solution {
public:
    char findTheDifference(string s, string t) {
        int a = 0;
        for(char &ch:s){
            a ^=ch;
        }
        for(char &ch:t){
            a ^=ch;
        }
        return (char)a;
    }
};