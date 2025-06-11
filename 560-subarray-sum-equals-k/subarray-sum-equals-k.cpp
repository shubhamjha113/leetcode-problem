class Solution {
public:
   int subarraySum(vector<int>& nums, int k) {
    int sum = 0, count = 0;
    unordered_map<int, int> mpp;
    mpp[0] = 1;

    for (int num : nums) {
        sum += num;
        count += mpp[sum - k];
        mpp[sum]++;
    }
    return count;
}
};