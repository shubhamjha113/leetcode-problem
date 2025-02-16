class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        string token = "";
        string result="";
        while(str >> token){
            result = token + " " + result;
        }
        return result.substr(0,result.size()-1);
        
    }
};