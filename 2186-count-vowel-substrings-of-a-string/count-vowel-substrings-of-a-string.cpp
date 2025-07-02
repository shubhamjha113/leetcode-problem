class Solution {
public:
    bool isVowel(char ch){
        return ch=='a' ||  ch=='e' || ch=='i' ||ch=='o' || ch=='u';
    }

     int atMostK(string &s, int k) {
        int res = 0, i=0, n = s.size();
        unordered_map<char, int> mp;
        
        for(int j=0; j<n; j++) {
            if (!isVowel(s[j])) {
                i = j + 1;
                //Clear map as new substring will begin
                mp.clear();
                continue;
            }
            mp[s[j]]++;
            while(mp.size() > k){
                mp[s[i]]--;
                if(mp[s[i]] == 0) mp.erase(s[i]);
                i++;
            }
            res += j - i + 1;
        }
        return res;
    }

    int countVowelSubstrings(string word) {
        
         return atMostK(word, 5) - atMostK(word, 4);
    }
};