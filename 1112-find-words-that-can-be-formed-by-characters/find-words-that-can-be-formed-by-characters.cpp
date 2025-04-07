class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {  
        vector<int> count(26, 0);
    for (char ch : chars) {
        count[ch - 'a']++;
    }
    int ans = 0;
    for (string word : words) {
        vector<int> temp = count; 
        bool canForm = true;
        for (char ch : word) {
            if (temp[ch - 'a'] == 0) {
                canForm = false;
                break;
            }
            temp[ch - 'a']--;
        }

        if (canForm) {
            ans += word.size();
        }
    }

    return ans;
    }
};