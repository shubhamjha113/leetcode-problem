class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l=0,r=0,count=0,sum=0;
        while(r<s.size()){
            sum += abs(t[r]-s[r]);
            if(sum >maxCost){
                sum -= abs(t[l]-s[l]);
                l++;
            }
            count = max(count , r-l+1);
            r++;
        }
        return count;
    }
};