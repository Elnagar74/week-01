class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for (int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(word);
        }
        vector<vector<string>> res;
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            res.push_back(it->second);
        }
        return res;
    }
};