class Solution {
public:
    int minimumMoves(string s) {
        int count=0;
        int i=0;
        while(i<s.size()){
            if(s[i]=='X'){
                i+=3;
                count++;
            } 
            else{
                i++;
            } 
            
        }
        
        return count;
    }
};