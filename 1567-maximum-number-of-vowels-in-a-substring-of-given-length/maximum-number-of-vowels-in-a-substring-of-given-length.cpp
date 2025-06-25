class Solution {
public:
    int maxVowels(string s, int k) {
        int count =0;
        string vowel = "aeiou";
        for(int i=0;i<k;i++){
            if(vowel.find(s[i]) != string::npos){
                count++;
            }
        }
        int ans = count;
        int l=0,r = k-1;
        for(int i=k;i<s.size();i++){
            if(vowel.find(s[l]) != string::npos){
                count--;
            }
            l++,r++;
            if(vowel.find(s[r]) != string::npos){
                count++;
            }
             ans = max(ans,count);
        }
        return ans;
    }
};