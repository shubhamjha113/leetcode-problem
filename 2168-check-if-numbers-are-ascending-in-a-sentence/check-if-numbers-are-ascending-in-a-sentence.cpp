class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream ss(s);
        string word;
        int max = -1;
        
        while (ss >> word) {
            
            if (isdigit(word[0])) {
                int num = stoi(word);
               
                if (num <= max) {
                    return false;
                }
                max = num;
            }
        }
        return true; 
    }
};