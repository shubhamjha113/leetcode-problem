class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> p;
        for(int i=0;i<gifts.size();i++){
            p.push(gifts[i]);
        }
        while(k--){
            int x = p.top();
            p.pop();
            int y = floor(sqrt(x));
            p.push(y);
        }
        long long sum = 0;
        while(!p.empty()){
            sum += p.top();
            p.pop();
        }
        return sum;
    }
};