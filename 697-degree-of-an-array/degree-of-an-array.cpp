class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        if(nums.size()==1) return 1;
        unordered_map<int,int> freq;
        unordered_map<int,int> first;
        unordered_map<int,int> last;
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            freq[x]++;
            if(first.find(x)==first.end()){
                first[x]=i;
            }
            last[x]=i;
        }
        int maxi = INT_MIN;
        for(auto &it:freq){
            if(it.second>maxi){
                maxi = it.second;
            }
        }
        int minLen = INT_MAX;
        for(auto &y:freq ){
            if(y.second==maxi){
                int len = last[y.first]-first[y.first]+1;
                minLen = min(minLen,len);
            }
            
        }
        return minLen;
    }
};