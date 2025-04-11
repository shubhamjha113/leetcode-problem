class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> count(26,0);
        int maxCount=0;
        for(int i=0;i<tasks.size();i++){
            count[tasks[i]-'A']++;
            maxCount = max(maxCount,count[tasks[i]-'A']);
        }
        int ans = (maxCount-1)*(n+1);
        for(int i=0;i<26;i++){
            if(count[i]==maxCount) ans++;
        }
        return ans> tasks.size() ? ans : tasks.size();
    }
};