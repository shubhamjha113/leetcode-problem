class Solution {
public:

    void lpsfind(vector<int>& lps,string s) {
       
        int suff = 1,pre =0;
        while(suff < s.size()){
            //if matched 
            if(s[suff] == s[pre]){
                lps[suff] = pre +1;
                suff++;
                pre++;
            }
            //not match
            else{
                if(pre ==0){//agar wo zero index ko point kr rha h 
                    lps[suff] =0;
                    suff++;
                }
                else{
                    pre = lps[pre-1];
                }
            }
        }
    }


    int present(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        vector<int> lps(m,0);
        lpsfind(lps,needle);
        int first = 0,second = 0;
        while(first < n && second < m){
            if(haystack[first] == needle[second]){
                first++;
                second++;
            }
            else{
                if(second == 0){
                    first++;
                }
                else{
                    second = lps[second-1];
                }
            }
        }
        if(second == m){
            return 1;
        }
        return 0;
    }


    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        if(present(s+s,goal)==1){
            return true;
        }
        return false;
    }
};