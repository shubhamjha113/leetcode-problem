class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string> res;
        for(auto &s:folder){
            if(res.empty()) res.push_back(s);
            else{
                string prev = res.back();
                if(s.find(prev)==0 && s.size()>prev.size()&& s[prev.size()]=='/'){
                    continue;
                }
                else res.push_back(s);
            }
        }
        return res;
    }
};