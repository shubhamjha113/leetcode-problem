class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        bool found = false;
        int i=0,j=0,index;
        for(int i=0;i<n;i++){
            index=i;
            if(word[i]==ch){
                found=true;
                break;
            }
        }
        if(index==n-1&&!found) return word;
        while(j<=index){
            swap(word[index],word[j]);
            index--,j++;
        }
        return word;
    }
};