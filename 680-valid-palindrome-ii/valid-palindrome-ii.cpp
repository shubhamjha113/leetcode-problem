class Solution {
public:
    /*Compare characters from the left and right ends of the string.
    If they match, continue moving inward.
    If a mismatch occurs, we have one chance to remove a character 
    (either from the left or the right)*/

    bool ispalindrome(string &s,int left,int right){
        while(left < right){
            if(s[left]!=s[right]) return false;
            left++,right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r]){
                return ispalindrome(s,l+1,r) || ispalindrome(s,l,r-1);
            }
            l++;
            r--;
        }
        return true;
    }
};