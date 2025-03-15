
class Solution {

public:
vector<int> NSE(vector<int>& arr){
    int n = arr.size();
    vector<int> nse(n);
    stack<int> s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && arr[s.top()]>= arr[i]){
            s.pop();
        }
        nse[i]=s.empty()? n :s.top();
        s.push(i);
    }
    return nse;
}
vector<int> PSEE(vector<int>& arr){
    int n = arr.size();
    vector<int> psee(n);
    stack<int> s;
    for(int i=0;i<n;i++){
        while(!s.empty() && arr[s.top()]> arr[i]){
            s.pop();
        }
        psee[i]=s.empty()? -1 :s.top();
        s.push(i);
    }
    return psee;
}



    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> next_smaller = NSE(arr);
        vector<int> prev_smaller = PSEE(arr);
        long long sum=0;
        const int mod = 1e9 +7;
        for(int i=0;i<n;i++){
            long long left = i-prev_smaller[i];
            long long right = next_smaller[i]-i;
            sum = (sum + (left*right*arr[i])%mod)%mod;
        }
     return sum;
    }
};