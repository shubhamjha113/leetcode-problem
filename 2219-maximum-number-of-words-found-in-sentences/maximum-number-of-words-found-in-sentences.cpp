class Solution {
public:
    int count(string s){
        int a=1;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                a++;
            }
        }
        return a;
    }

    int mostWordsFound(vector<string>& sentences) {
        int maxi =0;
        for(int i=0;i<sentences.size();i++){
            int size=count(sentences[i]);
            maxi = max(maxi,size);
        }
        return maxi;
    }
};