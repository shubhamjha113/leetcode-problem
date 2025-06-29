class Solution {
public:
    int takeCharacters(string s, int k) {
        int cntA=0,cntB=0,cntC=0,len =0;
        for(char &ch:s){
            if(ch=='a') cntA++;
            else if(ch=='b') cntB++;
            else cntC++;
        }
        if(cntA < k ||cntB < k ||  cntC < k  ) return -1;
        int l=0,r=0;
        int currA=0,currB=0,currC=0;
        while(r<s.size()){
            if(s[r]=='a') currA++;
            else if(s[r]=='b') currB++;
            else currC++;

            while(cntA- currA <k || cntB - currB <k || cntC-currC<k ){
                if(s[l]=='a') currA--;
                else if(s[l]=='b') currB--;
                else currC--;

                l++;
            }
            len = max(len,r-l+1);
            r++;
        }
        return s.size()-len;
    }
};