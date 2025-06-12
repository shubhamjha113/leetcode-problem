class Solution {
public:
    int findWays(vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> prev(k + 1, 0), curr(k + 1, 0);

    // Base case initialization
    if (arr[0] == 0) prev[0] = 2; // pick or not pick
    else prev[0] = 1;

    if (arr[0] != 0 && arr[0] <= k)
        prev[arr[0]] = 1;

    for (int ind = 1; ind < n; ind++) {
        for (int sum = 0; sum <= k; sum++) {
            int notPick = prev[sum];
            int pick = 0;
            if (arr[ind] <= sum)
                pick = prev[sum - arr[ind]];
            curr[sum] = (notPick + pick) ;
        }
        prev = curr;
    }

    return prev[k];
}



    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
    for (int &it : nums) sum += it;

    // (sum - d) must be even and non-negative
    if ((sum - target) < 0 || (sum - target) % 2 != 0) return 0;

    int tar = (sum - target) / 2;
    return findWays(nums, tar);
    }
};