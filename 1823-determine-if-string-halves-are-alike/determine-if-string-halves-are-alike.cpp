class Solution {
public:
    int noOfVowels(string a){
        int count=0;
        for(int i=0;i<a.size();i++){
            char ch = tolower(a[i]);
            if(ch=='a' || ch=='e'||ch=='i'|| ch=='o'||ch=='u'){
                count++; 
            }
        }
        return count;
    }

    bool halvesAreAlike(string s) {
        int n = s.size();
        string s1 =s.substr(0,n/2);
        string s2 =s.substr(n/2);
        return noOfVowels(s1)==noOfVowels(s2);
    }
};