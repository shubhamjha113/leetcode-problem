class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int ans = 0,i=0,j=0;
        unordered_map<char,int> mp;
        while(j<n){
            mp[answerKey[j]]++;
            while(min(mp['T'],mp['F']) > k){
                mp[answerKey[i]]--;
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};