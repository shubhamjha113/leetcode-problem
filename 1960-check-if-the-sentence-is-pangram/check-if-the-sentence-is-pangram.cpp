class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> count(26,0);
        for(int i=0;i<sentence.size() ; i++){
            count[sentence[i] - 'a'] = 1;
        }
        for(int i=0;i<26;i++){
            if(count[i]==0)
             return 0;
        }
        return 1;
    }
};