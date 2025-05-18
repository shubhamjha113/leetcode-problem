class Solution {
public:
    int countPoints(string rings) {
        int rods[10] = {0};
        int n = rings.length();

        for (int i = 0; i < n; i += 2) {
            int colorBit = rings[i] == 'R' ? 1 : rings[i] == 'G' ? 2 : 4;
            rods[rings[i + 1] - '0'] |= colorBit;
        }

        int count = 0;
        for (int i = 0; i < 10; ++i){
            if (rods[i] == 7) count++;
        }

        return count;
    }
};