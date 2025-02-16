class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int index =-1;
        int n = num.size();
        
        for(int i=n-1;i>=0;i--){
            int ch = num[i] - '0';
            if(ch%2==1){
                index = i;
                break;
            }
        }
        //ans = num.substr(0,index+1);          // extract from num
        for(int i=0;i<index+1;i++){
            ans += num[i];
        }
        
     return ans; 
    }
};