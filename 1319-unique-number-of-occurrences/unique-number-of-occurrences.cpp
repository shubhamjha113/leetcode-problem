class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        //USING MAP AND SET 
        // unordered_map<int,int> mp;
        // for(auto &a:arr){
        //     mp[a]++;
        // }
        // unordered_set<int> st;
        // for(auto &it:mp){
        //     int freq = it.second;
        //     if(st.find(freq) != st.end()){
        //         return false;
        //     }

        //     st.insert(freq);
        // }
        // return true;

        vector<int> count(2001,0);
        for(int i=0;i<arr.size();i++){
            count[arr[i]+1000]++;
        }

        sort(count.begin(),count.end());
        for(int i=1;i<2001;i++){
            if(count[i] && count[i]==count[i-1]){
                return false;
            }
        }
        return true;
    }
};