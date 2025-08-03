class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();
        vector<int> pSum(n),positions(n);
        for(int i=0;i<n;i++){
            positions[i] = fruits[i][0];
            pSum[i] = fruits[i][1] + (i>0? pSum[i-1] : 0);
        }
        int maxi = 0;
        for(int d = 0;d<=k/2;d++){
            //case 1 
            int remain = k-2*d;
            int i = startPos - d;
            int j = startPos + remain;
            int left =  lower_bound(begin(positions),end(positions),i) - begin(positions);
            int right = upper_bound(begin(positions),end(positions),j) - begin(positions) - 1;
            if(left <= right){
                int total = pSum[right] - (left >0 ? pSum[left-1] : 0);
                maxi = max(maxi , total);
            }
            //case 2 
        
             j = startPos + d;
             i = startPos - remain;
             left =  lower_bound(begin(positions),end(positions),i) - begin(positions);
            right = upper_bound(begin(positions),end(positions),j) - begin(positions) - 1;
            if(left <= right){
                int  total = pSum[right] - (left >0 ? pSum[left-1] : 0);
                maxi = max(maxi , total);
            }

        }
        return maxi;
    }
};