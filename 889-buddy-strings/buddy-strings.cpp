class Solution {
public:
    bool cheakFreq(string s){
        vector<int> count(26,0);
        for(char &ch:s){
            count[ch-'a']++;
        }
        for(int i=0;i<26;i++){
            if(count[i]>1) return true;
        }

        return false;
    }

    bool buddyStrings(string s, string goal) {
        if(s.length() != goal.length()) return false;

       if(s==goal){
            return cheakFreq(s);
       }

       vector<int> index;
       int i=0,j=0;
       while(i<s.size() && j<goal.size()){
            if(s[i] != goal[j]){
                index.push_back(i);
            }
            i++,j++;
       }
       if(index.size() != 2) return false;
       swap(s[index[0]] , s[index[1]]);
        return s==goal;
    }
};