class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        unordered_set<int> st;
        int sum = 0;
        int n = nums.size();
        for(int &i:nums){
            sum += i;
            if(i>0) st.insert(i);
        }
        int avg = sum/n;
        for(int i=max(1,avg+1);i<202;i++){
            if(st.find(i)==st.end()){
                return i;
            }
        }
        return -1;
    }
};