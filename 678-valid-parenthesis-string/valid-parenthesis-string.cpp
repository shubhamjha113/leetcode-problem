class Solution {
public:
    // Brute force using recurssion 

    // bool fn(string s, int index,int count){
    //     if(count<0) return false;

    //     if(index==s.size()) return count==0;

    //     if(s[index]=='('){
    //         return fn(s,index+1,count+1);
    //     }
    //     if(s[index]==')'){
    //         return fn(s,index+1,count-1);
    //     }
    //     return fn(s,index+1,count+1) || fn(s,index+1,count-1) || fn(s,index+1,count);
    // }
    bool checkValidString(string s) {
        if(s.size()==1){
            if(s[0]=='*') return true;
            else return false;
        }
        int min=0,max=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                min += 1;
                max +=1;
            }
            else if(s[i]==')'){
                min -=1;
                max -=1;
            }
            else{
                min -= 1;
                max += 1;
            }
            if(min<0) min =0;

            if(max<0) return false;
        }
        return min==0;
    }
};