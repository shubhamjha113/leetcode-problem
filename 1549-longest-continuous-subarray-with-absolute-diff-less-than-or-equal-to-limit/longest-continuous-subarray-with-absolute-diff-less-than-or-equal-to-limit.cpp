class Solution {
public:
typedef pair<int,int> P;
    int longestSubarray(vector<int>& nums, int limit) {
        priority_queue<P,vector<P>> maxPQ;
        priority_queue<P,vector<P>,greater<P>> minPQ;
        int l=0,r=0,len = 0;
        while(r<nums.size()){
            maxPQ.push({nums[r],r});
            minPQ.push({nums[r],r});
            while(maxPQ.top().first - minPQ.top().first > limit){
                l = min(maxPQ.top().second,minPQ.top().second) + 1;
                while(maxPQ.top().second <l) maxPQ.pop();
                while(minPQ.top().second <l) minPQ.pop();
            }
            len = max(len,r-l+1);
            r++;
        }
        return len;
    }
};