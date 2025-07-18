class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int kharch =0,kamai =0,n = gas.size();
        for(int i=0;i<n;i++){
            kamai += gas[i];
            kharch += cost[i];
        } 
        if(kharch > kamai) return -1;
        int total =0,ans =0;
        for(int i=0;i<n;i++){
            total = total + gas[i] - cost[i];
            if(total < 0){
                total =0;
                ans = i+1;
            }
        }
        return ans;
    }
};