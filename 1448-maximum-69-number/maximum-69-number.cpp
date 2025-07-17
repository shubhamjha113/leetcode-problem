class Solution {
public:
    int maximum69Number (int num) {
        int placevalue = 0,placevalueSix = -1;
        int temp = num;
        while(temp>0){
            int rem = temp%10;
            if(rem ==6){
                placevalueSix = placevalue;
            }
            temp /=10;
            placevalue++;
        }
        if(placevalueSix == -1) return num;
        return num + 3*pow(10,placevalueSix);
    }
};