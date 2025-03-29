class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> p(gifts.begin(),gifts.end());
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