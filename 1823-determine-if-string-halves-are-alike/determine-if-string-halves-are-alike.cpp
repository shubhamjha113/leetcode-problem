class Solution {
public:
    //approach 1
    // int noOfVowels(string a){
    //     int count=0;
    //     for(int i=0;i<a.size();i++){
    //         char ch = tolower(a[i]);
    //         if(ch=='a' || ch=='e'||ch=='i'|| ch=='o'||ch=='u'){
    //             count++; 
    //         }
    //     }
    //     return count;
    // }
    // bool halvesAreAlike(string s) {
    //     int n = s.size();
    //     string s1 =s.substr(0,n/2);
    //     string s2 =s.substr(n/2);
    //     return noOfVowels(s1)==noOfVowels(s2);
    // }
    bool halvesAreAlike(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        int mid = s.size()/2;
        int ans=0;
        for(int i=0;i<mid;i++){
            if(vowels.count(s[i])) ans++;
            if(vowels.count(s[i+mid])) ans--;
        }
        return ans==0;
    }
};