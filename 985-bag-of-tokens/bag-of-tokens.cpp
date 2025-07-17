class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        int i=0,j=n-1;
        sort(tokens.begin(),tokens.end());
        int maxScore = 0,score = 0;
        while(i<=j){
            if(power>= tokens[i]){
                power -= tokens[i];
                score++;
                maxScore = max(maxScore,score);
                i++;
                
            }
            else if(score>=1){
                power += tokens[j];
                score--;
                j--;
            }
            else return maxScore;
           
        }
        return maxScore;
    }
};