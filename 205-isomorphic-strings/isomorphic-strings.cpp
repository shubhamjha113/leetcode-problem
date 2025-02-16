class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> strS;
        unordered_map<char,int> strT;

        for(int i=0;i<s.size();i++){
            if(strS.find(s[i]) == strS.end()){
                strS[s[i]] = i;
            }
            if(strT.find(t[i]) == strT.end()){
                strT[t[i]] = i;
            }
            if(strS[s[i]] != strT[t[i]]){
                return false;
            }
        }
        return true;
    }
        
};