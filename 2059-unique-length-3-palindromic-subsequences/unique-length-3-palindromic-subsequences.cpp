class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<pair<int,int>> index(26,{-1,-1});
        for(int i=0;i<s.size();i++){
            
            if(index[s[i]-'a'].first==-1){
                index[s[i]-'a'].first=i;
            }
            index[s[i]-'a'].second = i;
        }
        int ans =0;
        for(int i=0;i<26;i++) {
            int left = index[i].first;
            int right= index[i].second;
            if(left==-1){
                continue;
            }

            unordered_set<char> st;
            for(int mid = left+1;mid<=right-1;mid++){
                st.insert(s[mid]);
            }
            ans +=st.size();
        }
        return ans;
    }
};