class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
        for(string &str: words){
            mp[str]++;
        }
        int ans =0;
        bool middle=false;
        for(string &word : words){
            string rev = word;
            reverse(rev.begin(),rev.end());
            if(word != rev){
                if(mp[word] >0 && mp[rev]>0){
                    ans +=4;
                    mp[word]--,mp[rev]--;
                }
            }
            else{
                if(mp[word]>=2){
                    ans +=4;
                    mp[word]-=2;
                }
                else if(mp[word]==1 && middle==false){
                        ans +=2;
                        mp[word]--;
                        middle = true;
                }  
            }
        }
        return ans;
    }
};