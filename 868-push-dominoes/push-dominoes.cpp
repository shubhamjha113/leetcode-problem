class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        vector<int> leftClosestR(n);
        vector<int> rightClosestL(n);
        // for leftClosestR we traverse left to right
        for(int i=0;i<n;i++){
            if(dominoes[i]=='R'){
                leftClosestR[i] = i;
            }
            else if(dominoes[i]=='.'){
                leftClosestR[i] = i>0 ? leftClosestR[i-1] : -1;
            }
            else {
                leftClosestR[i] = -1;
            }
        }
        //for rightClosestL we traverse  right to left
        for(int i=n-1;i>=0;i--){
            if(dominoes[i]=='R'){
                rightClosestL[i] = -1;
            }
            else if(dominoes[i]=='.'){
                rightClosestL[i] = i<n-1 ? rightClosestL[i+1] : -1;
            }
            else {
                rightClosestL[i] = i;
            }
        }
        string ans(n,' ');
        for(int i=0;i<n;i++){
            int distLeftR = abs(i-leftClosestR[i]);
            int distRightL = abs(i-rightClosestL[i]);
            if(leftClosestR[i]==rightClosestL[i]){//dono -1 honge
                ans[i] = '.';
            }
            else if(leftClosestR[i]==-1){
                ans[i] = 'L';
            }
            else if(rightClosestL[i]==-1){
                ans[i] = 'R';
            }
            else if(distLeftR == distRightL){
                ans[i] = '.';
            }
            else{
                ans[i] = distLeftR > distRightL ? 'L':'R';
            }
        }
        return ans;
    }
};