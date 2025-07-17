class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        sort(tasks.begin(),tasks.end());
        for(int &i:tasks ){
            mp[i]++;
        }
        int ans =0;
        for(auto &it:mp){
             int count = it.second;
            if(count <2 ) return -1;
           
            ans += ceil((double)count/3);
            
        }
        return ans;
    }
};