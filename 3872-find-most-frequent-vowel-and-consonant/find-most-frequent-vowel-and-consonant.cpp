class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> count(26,0);
        int vow=0,con =0;
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
            if(string("aeiou").find(s[i]) != string::npos){
                vow = max(vow,count[s[i]-'a']);
            }
            else{
                con = max(con,count[s[i]-'a']);
            }
        }
        
        return vow + con;
    }
};