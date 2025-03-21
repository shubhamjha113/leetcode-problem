class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int Lsum=0,Rsum=0,maxsum=0;
        for(int i=0;i<k;i++){
            Lsum += cardPoints[i];
        }
        maxsum = Lsum;
        int Rindex = cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            Lsum -= cardPoints[i];
            Rsum += cardPoints[Rindex];
            maxsum = max(maxsum , Lsum+Rsum);  
            Rindex--; 
        }
        return maxsum;
    }
};