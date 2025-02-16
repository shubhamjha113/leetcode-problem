class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int index =-1;
        if(num[num.size()-1]%2==1){
            ans = num;
        }
        for(int i=0;i<num.size();i++){
            int ch = num[i] - '0';
            if(ch%2==1){
                index = i;
            }
        }
        ans = num.substr(0,index+1);
        
     return ans; 
    }
};