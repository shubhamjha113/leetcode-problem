class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if(n==0) return {};
         vector<int> sortedArr = arr; 
    sort(sortedArr.begin(), sortedArr.end());  // Sort the array

    unordered_map<int, int> mp;
    int rank = 1;

    // Assign ranks in sorted order (without duplicates)
    for (int i = 0; i < n; i++) {
        if (mp.find(sortedArr[i]) == mp.end()) {
            mp[sortedArr[i]] = rank++;
        }
    }

    // Replace elements in original array with ranks
    for (int &num : arr) {
        num = mp[num];
    }

    return arr;
    }
};