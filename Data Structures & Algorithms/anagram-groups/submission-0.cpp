class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string,vector<string>>mp;
        for(int i = 0 ; i<strs.size() ; i++){
            string original = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(original);
        }

        for(auto it : mp){
            vector<string>temp;
            for(auto i : it.second){
                temp.push_back(i);
            }
            res.push_back(temp);
        }
        return res;
    }
};
