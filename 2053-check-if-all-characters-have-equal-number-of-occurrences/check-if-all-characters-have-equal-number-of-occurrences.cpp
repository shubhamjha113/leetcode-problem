class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> count(26,0);
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
        }
        int x;
        for(int i=0;i<26;i++){
            if(count[i]){
                 x =count[i];
                break;
            }
        }
        for(int i=0;i<26;i++){
            if(count[i]){
                 if(count[i] !=x){
                    return false;
                 }
               
            }
        }
        return true;
    }
};