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
        sort(rbegin(count),rend(count));
        int n = count.size();
        while(k){
            if(k< count.back()){
                return n;
            } 
            k -= count.back();
            count.pop_back();
            n = count.size(); 
            
        }
        return n;
    }
};