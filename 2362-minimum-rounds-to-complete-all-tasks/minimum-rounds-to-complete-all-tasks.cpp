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
           
            if(count%3 ==0){
                ans += count/3;
            }
            else{
                ans += count/3 +1;
            }
        }
        return ans;
    }
};