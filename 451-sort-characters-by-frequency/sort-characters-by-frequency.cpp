class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        vector<pair<char,int>> freq(128,{0,0});
        
    for (int i = 0; i < 128; i++) {
        freq[i].first = char(i);
    }

    
    for (char ch : s) {
        freq[ch].second++;
    }
    auto lamda = [&](pair<char,int> &p1,pair<char,int> &p2){
        return p1.second>p2.second;
    };


    sort(begin(freq),end(freq),lamda);

    for (auto &p : freq) {
        if (p.second > 0) {
            ans += string(p.second, p.first);
        }
    }

        
        return ans;
    }
};