class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count = 0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W'){
                count++;
            }
        }
        int ans = count ;
        int l=0,r=k-1;
        for(int i =k;i<blocks.size();i++){
            if(blocks[l]=='W'){
                count--;
            }
            l++,r++;
            if(blocks[r]=='W') count++;
            ans  = min(ans ,count);
        }
        return ans;
    }
};