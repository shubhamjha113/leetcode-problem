class Solution {
public:
    bool canPartition(vector<int>& arr) {
        int n =arr.size();
        int add = 0;
	for(int i=0;i<n;i++){
		add+=arr[i];
	}
    if(add&1) return false;
	int sum = add/2;
        vector<bool> prev(sum+1,0),curr(sum+1,0);
        prev[0] = true;
        if (arr[0] <= sum)
            prev[arr[0]] = true;
        
        for(int ind=1;ind<n;ind++){
            curr[0] = true;
            for(int T = 1;T<=sum;T++){
                bool notTake = prev[T];
                bool take =false;
                if(arr[ind]<= T) take = prev[T-arr[ind]];
                curr[T] = take || notTake;
            }
            prev = curr;
        }
        return prev[sum];
    }
};