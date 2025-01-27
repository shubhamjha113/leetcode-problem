class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;

    int maxProduct = nums[0];
    int currentMax = nums[0], currentMin = nums[0];

    for (int i = 1; i < n; ++i) {
        if (nums[i] < 0) swap(currentMax, currentMin);

        currentMax = max(nums[i], currentMax * nums[i]);
        currentMin = min(nums[i], currentMin * nums[i]);

        maxProduct = max(maxProduct, currentMax);
    }

    return maxProduct;
}

};