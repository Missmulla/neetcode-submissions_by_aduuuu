class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> m;
        vector<vector<string>>res;

        for(auto &x : strs){
            string word = x;
            sort(word.begin(), word.end());
            m[word].push_back(x);
        }

        for(auto &x : m){
            res.push_back(x.second);
        }
        return res;
    }
};
