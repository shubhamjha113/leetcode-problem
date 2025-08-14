class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s;
        while(columnNumber >0){
            columnNumber--;
            int remain = columnNumber%26;
            s += remain+'A';
            columnNumber/=26;
        }
        reverse(begin(s),end(s));
        return s;
    }
};