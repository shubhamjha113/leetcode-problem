class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = s.size();
        vector<int> store(10,-1);
        for(int i=0;i<n;i++){
            store[s[i]-'0'] = i;
        }
        for(int i=0;i<n;i++){
            int currDigit = s[i]-'0';
            for(int digit = 9;digit > currDigit; digit--){
                if(store[digit]> i){
                    swap(s[i],s[store[digit]]);
                    return stoi(s);
                }
            }
        }
        return num;
    }
};