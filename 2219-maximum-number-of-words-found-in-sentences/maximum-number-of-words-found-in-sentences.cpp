class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(int i=0;i<sentences.size();i++){
            int  words=count(sentences[i].begin(),sentences[i].end(),' ') +1;
            ans = max(ans,words);
        }
        return ans;
    }
};