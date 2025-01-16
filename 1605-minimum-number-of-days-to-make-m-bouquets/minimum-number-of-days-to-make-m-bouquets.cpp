class Solution {
public:
    bool makeBouquet(vector<int>& bloomDay, int m, int k,int mid){
        int bouqueCount = 0;
        int count=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i] <= mid){
                count++;
            }
            else{
                count = 0;
            }
            if(count == k ){
                bouqueCount++;
                count=0;
            }
        }
        return bouqueCount>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int s=0,ans=-1;
        int e = *max_element(bloomDay.begin() , bloomDay.end());
        while(s<=e){
            int mid = s + (e-s)/2;
            if(makeBouquet(bloomDay,m,k,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};