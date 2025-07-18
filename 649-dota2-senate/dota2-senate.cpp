class Solution {
public:
    void removesenate(string &senate,char ch,vector<bool> &removed,int idx,int n){
        while(true){
            if(senate[idx]==ch && removed[idx]==false){
                removed[idx]= true;
                break;
            }
            idx = (idx+1)%n;
        }
    }
    string predictPartyVictory(string senate) {
        int n = senate.size();
        int cntR = count(senate.begin(),senate.end(),'R');
        int cntD = n-cntR;
        vector<bool> removed(n,false);
        int idx=0;
        while(cntR > 0 && cntD>0){
            if(!removed[idx]){
                if(senate[idx]=='R'){
                    removesenate(senate,'D',removed,(idx+1)%n,n);
                    cntD--;
                }else{
                    removesenate(senate,'R',removed,(idx+1)%n,n);
                    cntR--;
                }
            }
            idx = (idx+1)%n;
        }
        return cntR==0 ? "Dire" : "Radiant";
    }
};