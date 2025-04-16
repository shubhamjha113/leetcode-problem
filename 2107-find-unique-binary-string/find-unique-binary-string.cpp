class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<int> st;
        for(string &num:nums){
            st.insert(stoi(num,0,2)); //ye binary string ko push krega 
        }
        string result="";
        for(int n=0;n<=nums.size();n++){
            if(st.find(n) == st.end()){
                result = bitset<16>(n).to_string();
                return result.substr(16-nums.size(),nums.size());
            }
        }
        return "";
    }
};
        //approach 2
        // string result="";
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i][i] == '0')
        //         result+='1';
        //     else
        //         result +='0';
        // }
        // return result;