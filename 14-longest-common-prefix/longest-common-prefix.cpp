class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        // int minLen = INT_MAX;
        // for(int i=0;i<strs.size();i++){
        //     if(strs[i].size() < minLen){
        //         minLen = strs[i].size();
        //     }
        // }
        sort(strs.begin(),strs.end());
        string first = strs[0],last = strs[strs.size()-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i] != last[i]){
                return ans;
            }
            else{
                ans+=first[i];
            }
        }
        return ans;
    }
};