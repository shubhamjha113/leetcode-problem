class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int zero =0,one=0,l=0,r=0,count =0;
        while(r<s.size()){
            if(s[r]=='0') zero++;
            else one++;

            while(zero>k && one>k){
                if(s[l]=='0') zero--;
                else one--;

                l++;
            }
            count += r-l+1;
            r++;
        }
        return count;
    }
};