class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size()==1) return s;
        vector<int> count(26,0);
        for(char ch : s){
            count[ch-'a']++;
        }
        string odd="";
        for(int i=0;i<26;i++){
            if(count[i]&1){
                odd+=i+'a';
                break;
            }
        }
        string s1="";
        for(int i=0;i<26;i++){
            if(count[i]){
                for(int j=0;j<count[i]/2;j++){
                    s1 += i+'a';
                }
            }
        }
        string s2(rbegin(s1),rend(s1));
        return s1+odd+s2;
    }
};