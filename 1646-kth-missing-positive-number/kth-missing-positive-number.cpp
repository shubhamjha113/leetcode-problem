class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int num = 1;
        int n = arr.size(),i=0;
        while(i<n && k>0){
            if(num == arr[i]){
                i++;
            }
            else{
                k--;
            }
            num++;
        }
        while(k--){
            num++;
        }
        return num-1;
    }
};