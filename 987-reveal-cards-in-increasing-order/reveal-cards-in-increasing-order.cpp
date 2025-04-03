class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n =deck.size();
        vector<int> ans(n,0);
        sort(begin(deck),end(deck));
        int i=0,j=0;
        bool skip = false;
        while(i<n){
            if(!ans[j]){
                if(!skip){
                    ans[j] = deck[i];
                    i++;
                }
                skip = !skip;
            }
            j = (j+1)%n;
        }
        return ans;
    }
};