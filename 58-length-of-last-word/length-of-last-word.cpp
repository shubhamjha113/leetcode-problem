class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int i=n-1;
        while(!isalpha(s[i])){
            i--;
        }
        string temp="";
        while(i>=0){
            if(isalpha(s[i])){
                temp +=s[i];
            }
            else{
                break;
            }
            i--;
        }
        return temp.size();
    }
};