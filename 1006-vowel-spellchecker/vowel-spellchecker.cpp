class Solution {
public:
    unordered_set<string> original;
    unordered_map<string,string> lower;
    unordered_map<string,string> vowelError;
    string toLower(const string &s){
        string ans = s;
        for(char &ch:ans){
            ch = tolower(ch);
        }
        return ans;
    }
    string vowelss(const string &s){
        string ans = s;
        for(char &ch:ans){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                ch = '*';
            }
        }
        return ans;
    }
    string cheakForquery(string &s){
        if(original.count(s)){
            return s;
        }

        string lowerOfS = toLower(s);
        if(lower.count(lowerOfS)){
            return lower[lowerOfS];
        }

        string noVowelOfS = vowelss(lowerOfS);
        if(vowelError.count(noVowelOfS)){
            return vowelError[noVowelOfS];
        }

        return "";
    }

    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        original.clear();
        lower.clear();
        vowelError.clear();

        for(string word:wordlist){
            original.insert(word);
            string lowerCase = toLower(word);
            if(lower.find(lowerCase) == lower.end()){
                lower[lowerCase] = word;
            }
            string withoutVow = vowelss(lowerCase);
            if(vowelError.find(withoutVow) == vowelError.end()){
                vowelError[withoutVow] = word;
            }
        }
        vector<string> ans;
        for(auto query:queries){
            ans.push_back(cheakForquery(query));
        }
        return ans;
    }
};