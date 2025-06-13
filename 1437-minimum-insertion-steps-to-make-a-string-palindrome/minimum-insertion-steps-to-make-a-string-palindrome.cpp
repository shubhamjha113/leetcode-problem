class Solution {
public:
    int lcs(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<int> prev(m+1,0),curr(m+1,0);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i-1]==text2[j-1])  curr[j]=1+ prev[j-1];
                else curr[j] = max(curr[j-1],prev[j]);
            }
            prev = curr;
        }
        return prev[m];
    }
   
   
   int minInsertions(string str) {
        int n = str.size();
	string rev= str;
    reverse(rev.begin(),rev.end());
    return n-lcs(str,rev);
    }
};