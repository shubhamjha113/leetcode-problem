class Solution {
public:
    bool allZero(vector<int> &count){
      for(int &i:count){
          if(i!=0) return false;
      }
      return true;
    }

    vector<int> findAnagrams(string s, string p) {
         vector<int> ans;
        int n = p.size();
        vector<int> count(26,0);
        for(int i=0;i<n;i++){
            count[p[i]-'a']++;
        }
        int i=0,j=0;
        while(j<s.size()){
            count[s[j]-'a']--;
            if(j-i+1 == n){
                if(allZero(count)){
                    ans.push_back(i);
                }
                 count[s[i]-'a']++;
                 i++;
            } 
            j++;
        }
        return ans;
    }
};