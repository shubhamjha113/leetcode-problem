class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string t = to_string(n);
        sort(t.begin(),t.end());
        int x = 1;
        for(int i=0;i<32;i++){
            string s = to_string(x<<i);
            sort(s.begin(),s.end());
            if(s==t) return true;
        }
        return false;
    }
};