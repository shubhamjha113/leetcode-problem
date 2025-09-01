class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,int>> pq;
        int n = classes.size();
        for(int i=0;i<n;i++){
            double pr = (double)(classes[i][0])/(classes[i][1]);
            double newPr = (double)(classes[i][0]+1)/(classes[i][1]+1);
            double diff = newPr - pr;
            pq.push({diff,i});
        }
        while(extraStudents--){
            auto curr = pq.top();
            pq.pop();
            double diff = curr.first;
            int idx = curr.second;
            
            classes[idx][0]++;
            classes[idx][1]++;
            
            double pr = (double)(classes[idx][0])/(classes[idx][1]);
            double newPr = (double)(classes[idx][0]+1)/(classes[idx][1]+1);
             diff = newPr - pr;
            pq.push({diff,idx});   
        }
        double ans = 0.0;
        for(int i=0;i<n;i++){
            ans += (double)(classes[i][0])/(classes[i][1]);
        }
        return ans/n;
    }
};