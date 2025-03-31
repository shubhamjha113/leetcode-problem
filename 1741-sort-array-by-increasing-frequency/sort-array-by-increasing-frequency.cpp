class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> p;
        for(auto it: mp){
            p.push({it.second,-it.first});
        }

        vector<int> ans;
        while(!p.empty()){
            int freq = p.top().first;
            int num = -p.top().second;
            p.pop();
            while(freq--){
                ans.push_back(num);
            }
        }
        return ans;
    }
};