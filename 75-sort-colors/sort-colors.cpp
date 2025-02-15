class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n =arr.size();
        int a=0,b=0,c=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                a++;
            }
            else if(arr[i]==1){
                b++;
            }
            else{
                c++;
            }
        }
        for(int j=0;j<a;j++){
            arr[j] = 0;
        }
        for(int k=a;k<a+b;k++){
            arr[k] = 1;
        }
        for(int l=a+b;l<n;l++){
            arr[l] = 2;
        }
    }
};