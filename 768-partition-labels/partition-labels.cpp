class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int> RightOcc(26);
        for(int i=0;i<n;i++){
            RightOcc[s[i]-'a'] = i;
        }
        vector<int> ans;
        int start = 0,end =0;
        for(int i=0;i<n;i++){
            end = max(end,RightOcc[s[i]-'a']);
            if(i==end){
                ans.push_back(end - start+1);
                start = i+1;
            }
        }
        return ans;
    }
};