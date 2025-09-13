class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> vowel(26,0),consonent(26,0);
        for(int i=0;i<s.size();i++){
            if(string("aeiou").find(s[i]) != string::npos){
                vowel[s[i]-'a']++;
            }
            else{
                consonent[s[i]-'a']++;
            }
        }
        int max1 = *max_element(begin(vowel),end(vowel));
        int max2 = *max_element(begin(consonent),end(consonent));
        return max1 + max2;
    }
};