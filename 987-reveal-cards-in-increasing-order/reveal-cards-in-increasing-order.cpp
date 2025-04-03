class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n =deck.size();
        vector<int> ans(n,0);
        queue<int> q;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        sort(begin(deck),end(deck));
        for(int i=0;i<n;i++){
            int index = q.front();
            q.pop();
            ans[index] = deck[i];
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
    }
};