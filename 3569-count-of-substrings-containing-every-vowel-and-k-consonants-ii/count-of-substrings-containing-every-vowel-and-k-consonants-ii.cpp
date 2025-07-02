class Solution {
public: 
    bool isVowel(char ch){
        if(ch=='a' ||  ch=='e' || ch=='i' ||ch=='o' || ch=='u') return true;

        return false;
    }

    long long countOfSubstrings(string word, int k) {
        unordered_map<char,int> mp;
        int consonent =0;
        int n = word.size();
        vector<int> nextConsonent(n);
        int ind = n;
        nextConsonent[n-1] = ind;
        for(int i=n-1;i>=0;i--){
            nextConsonent[i] = ind;
            if(!isVowel(word[i])){
                ind = i;
            }
        }

        int i=0,j=0;
        long long ans = 0;
        while(j<word.size()){
            char ch = word[j];
            if(isVowel(ch)){
                mp[ch]++;
            }
            else{
                consonent++;
            }

            while(consonent > k){
                char ch = word[i];
                if(isVowel(ch)){
                    mp[ch]--;
                    if(mp[ch]==0) mp.erase(ch);
                }
                else consonent--;

                i++;
            }
            ind =0;
            while(mp.size()==5 && consonent==k){
                ans += nextConsonent[j]-j;
                char ch = word[i];
                if(isVowel(ch)){
                    mp[ch]--;
                    if(mp[ch]==0) mp.erase(ch);
                }
                else consonent--;
                i++;
            }
            j++;
        }
        return ans;
    }
};