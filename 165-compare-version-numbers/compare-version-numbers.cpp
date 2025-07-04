class Solution {
public:
    deque<string> getToken(string v){
        stringstream ss(v);
        string token="";
        deque<string> tokens;
        while(getline(ss,token,'.')){
            tokens.push_back(token);
        }
        return tokens;
    }
    int compareVersion(string version1, string version2) {
        deque<string> v1= getToken(version1);
        deque<string> v2= getToken(version2);
        int m = v1.size(), n = v2.size();
        int i=0;
        while(i<m || i< n){
            int a = i<m? stoi(v1[i]) : 0;
            int b = i<n? stoi(v2[i]) : 0;
            if(a>b) return 1;
            else if(a<b) return -1;
            else i++;
        }
        return 0;
    }
};