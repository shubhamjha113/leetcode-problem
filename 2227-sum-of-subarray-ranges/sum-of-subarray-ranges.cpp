class Solution {

// sum of subarray min
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
long long sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> next_smaller = NSE(arr);
        vector<int> prev_smaller = PSEE(arr);
        long long sum=0;
        for(int i=0;i<n;i++){
            long long left = i-prev_smaller[i];
            long long right = next_smaller[i]-i;
            sum = (sum + (left*right*arr[i]));
        }
     return sum;
}

// sum of subarray max 
vector<int> NGE(vector<int>& arr){
    int n = arr.size();
    vector<int> nge(n);
    stack<int> s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && arr[s.top()] <= arr[i]){
            s.pop();
        }
        nge[i]=s.empty()? n :s.top();
        s.push(i);
    }
    return nge;
}
vector<int> PGE(vector<int>& arr){
    int n = arr.size();
    vector<int> pge(n);
    stack<int> s;
    for(int i=0;i<n;i++){
        while(!s.empty() && arr[s.top()]< arr[i]){
            s.pop();
        }
        pge[i]=s.empty()? -1 :s.top();
        s.push(i);
    }
    return pge;
}
long long sumSubarrayMax(vector<int>& arr) {
        int n = arr.size();
        vector<int> next_smaller = NGE(arr);
        vector<int> prev_smaller = PGE(arr);
        long long sum=0;
        for(int i=0;i<n;i++){
            long long left = i-prev_smaller[i];
            long long right = next_smaller[i]-i;
            sum = (sum + (left*right*arr[i]));
        }
     return sum;
}




public:
    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMax(nums) - sumSubarrayMins(nums);
    }
};