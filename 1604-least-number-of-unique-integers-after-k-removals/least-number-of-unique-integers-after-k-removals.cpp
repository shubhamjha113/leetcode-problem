class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(int &i:arr){
            mp[i]++;
        }
        vector<int> count;
        for(auto &it:mp){
            int freq = it.second;
            count.push_back(freq);
        }
        sort(begin(count),end(count));
        for(int i=0;i<count.size();i++){
            k -= count[i];
            if(k<0) return count.size()-i;
        }
        return 0;
    }
};