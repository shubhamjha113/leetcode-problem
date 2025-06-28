class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int count =0;
        while(s.find("01") != string::npos){
            int l=0,r=1;
            count++;
            while(r<s.length() && l<s.length()-1){
                if(s[l]== '0' && s[r]=='1'){
                    s[l]='1';
                    s[r]='0';
                    l++,r++;
                }
                l++,r++;
            }
        }
        return count;
    }
};