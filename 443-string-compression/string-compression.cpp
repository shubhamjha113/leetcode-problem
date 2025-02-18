class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size()<=1) return 1;
        int index =0,i=0;
        while(i<chars.size()){
           char currChar = chars[i];
           int count = 0;
                while(i<chars.size() && currChar == chars[i]){
                    count++;
                    i++;
                } 
           chars[index] = currChar;
           index++;
           if(count>1){
            string countStr = to_string(count);
            for(char c: countStr){
                chars[index]= c;
                index++;
            }
           }
        }
       
        return index;
    }
};