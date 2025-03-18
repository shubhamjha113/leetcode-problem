class Solution {
public:
    int getLucky(string s, int k) {
        int  n = s.size();
        int sum=0,digit;
        string B="";
        for(int i=0;i<n;i++){
            B+=to_string((s[i]-'a')+1);
        }
        while(k--){
            sum=0;
            for(char c:B){
             
            sum +=c-'0';
            }
           B = to_string(sum);
        }
        return stoi(B);
    }
};