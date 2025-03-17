class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
    set<int> count(nums1.begin(), nums1.end());  
    set<int> seen;  
    for (int num : nums2) {
        if (count.find(num) != count.end() && seen.find(num) == seen.end()) {
            ans.push_back(num);
            seen.insert(num); 
        }
    }
    
    return ans;
    }
};