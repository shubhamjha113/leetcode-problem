class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int i=0,ans =0 , vowel = 0;
        while(i<word.size()){
            if(word[i] != 'a'){
                i++;
                continue;
            }
            int j=i;
            vowel = 1;
            while(j+1 < word.size() && word[j] <= word[j+1]){
                if(word[j] < word[j+1]) vowel++;
                j++;
            }

            if(vowel==5){
                ans = max(ans,j-i+1);
            }
            i=j+1; 
        }
        return ans;
    }
};