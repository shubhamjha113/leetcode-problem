class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int prev = 0,time =0;
        for(int i=0;i<n;i++){
            if(i>0 &&colors[i] != colors[i-1]){
                prev = 0;
            }
            int curr = neededTime[i];
            time += min(prev,curr);
            prev = max(prev , curr);
        }
        return time;
    }
};