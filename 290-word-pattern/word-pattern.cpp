class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int> charToindex;
        unordered_map<string,int> wordToindex;
        stringstream ss(s);
        string token;
        int countWords=0;
        int i=0,n=pattern.size();
        while(ss>>token){
            countWords++;
            if(i == n || charToindex[pattern[i]] != wordToindex[token]){
                return false;
            }
            charToindex[pattern[i]] = i+1;
            wordToindex[token] = i+1;

            i++;
        }

        if(i!=n || countWords != n) return false;

        return true;

    }
};