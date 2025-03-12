class Solution {
public:
    int recArea(vector<int>& heights) {
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

    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col= matrix[0].size();
        vector<int> heights(col,0);
        int ans = 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]=='0'){
                    heights[j]=0;
                }
                else{
                    heights[j]++;
                }
            }
            ans = max(ans,recArea(heights));
        }
        return ans;
    }
};