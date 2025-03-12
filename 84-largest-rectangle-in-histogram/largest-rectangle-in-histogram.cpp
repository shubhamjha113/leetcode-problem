class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int index,ans=0;
        stack<int> s;
        for(int i=0;i<n;i++){
            while(!s.empty() && (heights[s.top()] > heights[i])){
                index = s.top();
                s.pop();
                if(!s.empty()){
                    ans = max(ans,heights[index]*(i-s.top()-1));
                }
                else{
                    ans = max(ans,heights[index]*i);
                }
            }
            s.push(i);
        }
        while(!s.empty()){
           index = s.top();
            s.pop();
            if(!s.empty()){
                    ans = max(ans,heights[index]*(n-s.top()-1));
                }
                else{
                    ans = max(ans,heights[index]*n);
                }
        }
        
        return ans;
    }
};