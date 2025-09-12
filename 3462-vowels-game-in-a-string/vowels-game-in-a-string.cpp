class Solution {
public:
    bool doesAliceWin(string s) {
        for(int i=0;i<s.size();i++){
            if(string("aeiou").find(s[i]) != string::npos){
                return true;
            }
        }
        
        return false;
    }
};

//if(count==0) return false;
//if(count & 1) return true;