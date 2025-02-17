class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mpp;
        string ans="";
        for(char c:s){
            mpp[c]++;
        }
       
        vector<pair<int , char>> freq;
        for(auto it : mpp){
            freq.push_back({it.second,it.first});
        }

        sort(freq.rbegin(),freq.rend());
        for(auto k:freq){
            ans += string(k.first , k.second);
        }
        
        return ans;
    }
};