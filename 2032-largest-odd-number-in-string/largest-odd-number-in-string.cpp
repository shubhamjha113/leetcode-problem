class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int index =-1;
        int n = num.size();
        if(num[n-1] %2 == 1){
            return num;
        }
        for(int i=n-1;i>=0;i--){
            // int ch = num[i] - '0';
            if(num[i]%2==1){
                index = i;
                break;
            }
        }
         ans = num.substr(0,index+1);          // extract from num
        
        
     return ans; 
    }
};