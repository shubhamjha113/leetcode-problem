class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int count=0;
        // BBRUTE FORCE APPROACH   0(N^3) TIME COMPLEXITY
        // for(int r=0;r<n;r++){
        //     for(int c=0;c<n;c++){
        //         bool exist = true;
        //         for(int i=0;i<n;i++){
        //             if(grid[r][i] != grid[i][c]){
        //                 exist = false;
        //                 break;
        //             }
        //         }
        //         if(exist == true){
        //             count++;
        //         }
        //     }
        // }
        // return count;

        map<vector<int> ,int> mp;
        for(int r = 0;r<n;r++){
            mp[grid[r]]++;
        }

        for(int c=0;c<n;c++){
            vector<int> temp;
            for(int r=0;r<n;r++){
               temp.push_back(grid[r][c]); 
            }
            count += mp[temp];
        }

        return count;
    }
};