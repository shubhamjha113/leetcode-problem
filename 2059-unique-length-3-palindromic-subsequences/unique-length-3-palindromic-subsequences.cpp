class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char> letters;
        for(char &ch:s){
            letters.insert(ch);
        } 
        int ans =0;
        for(char letter:letters) {
            int left = -1,right=-1;
            for(int i=0;i<s.size();i++){
                if(s[i]==letter){
                    if(left==-1){
                        left=i;
                    }
                    right = i;
                }
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