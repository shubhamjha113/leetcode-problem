
class Solution {
public:
    bool isPos(vector<int>& piles, int h, int mid) {
        int sum = 0;  
        for (int &x:piles) {
            sum += x/mid; 
            if(x%mid !=0) sum++; 
        }
        return sum <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
         
        int e = *max_element(piles.begin(),piles.end());
       
        while(s<e){
            int mid=s + (e-s)/2;
            if(isPos(piles,h,mid)){
                e=mid;
            }
            else{
                s=mid+1;
            }
        }
        return s;
    }
};