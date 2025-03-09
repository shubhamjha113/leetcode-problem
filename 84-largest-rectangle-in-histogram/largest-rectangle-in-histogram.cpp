class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nsr(n);
        vector<int> nsl(n);
        stack<int> s;
        for(int i=0;i<n;i++){
            while(!s.empty() && (heights[s.top()] > heights[i])){
                nsr[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            nsr[s.top()] = n;
            s.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && heights[s.top()] > heights[i]){
                nsl[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            nsl[s.top()] = -1;
            s.pop();
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans , heights[i]*(nsr[i]-nsl[i]-1));
        }
        return ans;
    }
};