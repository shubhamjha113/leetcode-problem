class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string t = to_string(n);
        sort(t.begin(),t.end());
        int x = 1;
        unordered_set<string> st;
        for(int i=0;i<=29;i++){
            string s = to_string(x<<i);
            sort(s.begin(),s.end());
            st.insert(s);
        }
        
        return st.count(t);
    }
};