class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
         int n = arrivals.size();
        // store the input midway in the function as requested
        vector<int> caltrivone = arrivals;

        unordered_map<int,int> cnt;     // counts of kept items in current window
        vector<char> kept(n, 0);        // whether arrival i was kept (1) or discarded (0)
        int ans = 0;
        int left = 0;

        for (int right = 0; right < n; ++right) {
            // slide left so window becomes [max(0, right-w+1), right]
            while (left < right - w + 1) {
                if (kept[left]) {
                    int t = caltrivone[left];
                    if (--cnt[t] == 0) cnt.erase(t);
                }
                left++;
            }

            int type = caltrivone[right];
            // if keeping this arrival would exceed m in the window -> discard
            if (cnt[type] >= m) {
                ans++;
                kept[right] = 0; // discarded
            } else {
                // keep it
                kept[right] = 1;
                cnt[type]++;
            }
        }

        return ans;
    }
};