class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int index =-1;
        for(int i=0;i<num.size();i++){
            int ch = num[i] - '0';
            if(ch%2==1){
                index = i;
            }
        }
        //ans = num.substr(0,index+1);
        for(int i=0;i<index+1;i++){
            ans += num[i];
        }
        
     return ans; 
    }
};