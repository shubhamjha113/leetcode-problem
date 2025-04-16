class Solution {
public:
    string decodeAtIndex(string s, int k) {
        int n = s.size();
        long long size=0;
        for(char &ch:s){
            if(isalpha(ch)){
                size+=1;
            }
            else{
                size = size*(ch-'0');
            }
        }

        for(int i=n-1;i>=0;i--){
            k = k%size;
            if(k==0 && isalpha(s[i])){
                return string(1,s[i]);
            }

            if(isalpha(s[i])){
                size -=1;
            }
            else{
                size = size/(s[i]-'0');
            }
        }
        return "";
    }
};

// pehle traverse krenge agar alphabet hua to size 1 se increase hoga  agr digit hua to
// size jitna digit hoga utna time badh jayega  ab phir se last se traverse suru krenge
// pehle k = k%size ho jayega ab agar k 0 aa jaye or s[i] alphabet ho to wahi return krenge
// nhi to agar digit hua to size /digit-'0' hoga alphabet hua to size -1 se kam ho jayega 