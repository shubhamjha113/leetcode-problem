class Solution {
public:
    string smallestSubsequence(string s) {
        string result;
        vector<bool> taken(26,false);
        vector<int> lastIndex(26,0);
        for(int i=0;i<s.size();i++){
            lastIndex[s[i]-'a']=i;
        }

        for(int i=0;i<s.size();i++){
            if(taken[s[i]-'a']==true) continue;

            while(!result.empty() && result.back() > s[i] && lastIndex[result.back()-'a']>i){
                taken[result.back()-'a'] = false;
                result.pop_back();
            }
            result.push_back(s[i]);
            taken[s[i]-'a']=true;
        }
        return result;
    }
};