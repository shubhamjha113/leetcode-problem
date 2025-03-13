class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int t = 0;
        for(int i=0;i<tickets.size();i++){
            q.push(i);
        }
        while(tickets[k]){
            tickets[q.front()]--;
            t++;
            if(tickets[q.front()]){
                q.push(q.front());
            }
            q.pop();  
        }
        return t;
    }
};