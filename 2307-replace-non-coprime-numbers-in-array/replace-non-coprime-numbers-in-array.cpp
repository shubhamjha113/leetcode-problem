class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<long long> st;
        vector<int> ans;
        st.push(nums[0]);
        for(int i=1;i<nums.size();i++){
            long long num =  nums[i];
            while(!st.empty() && __gcd(st.top(),num) > 1){
                num = (st.top() * num)/(__gcd(st.top(),num));
                st.pop();
            }
            st.push(num);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};