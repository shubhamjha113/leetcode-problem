class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        if(s1.size() < s2.size()) swap(s1,s2);
        vector<string> v1,v2;
        stringstream ss1(s1);
        string t1;
        while(ss1>> t1){
            v1.push_back(t1);
        }
        stringstream ss2(s2);
        string t2;
        while(ss2>> t2){
            v2.push_back(t2);
        }
        int i=0,j=v1.size()-1,k=0,l=v2.size()-1;
        while(i<v1.size() && k < v2.size() && v1[i]==v2[k]){
            i++,k++;
        }
        while(l>=k && v1[j]==v2[l]){
            j--,l--;
        }
        return l<k;
    }
};