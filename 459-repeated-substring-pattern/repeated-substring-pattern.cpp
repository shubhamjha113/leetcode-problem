class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        //brute force :-  cheacking for all combinations 
        int n = s.size();
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                string s2 = s.substr(0,i);
                string repeat ="";
                for(int j=0;j < n/i; j++){
                    repeat+=s2;
                }
                if(repeat==s) return true;
            }
        }
        return false;






        /*if a string s can be constructed by repeating a substring,
          then concatenating two copies of s together and removing the
           first and last character would still contain s as a substring.*/

        // string s2 = s+s;
        // string sub= s2.substr(1,s2.size()-2);
        // return sub.find(s) != string::npos;


    }
};