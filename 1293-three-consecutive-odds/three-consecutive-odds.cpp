class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int c=0;
        for(int x:arr){
            c=(x%2) ? c+1:0;
            if(c==3) return true;
        }
        return false;
    }
};