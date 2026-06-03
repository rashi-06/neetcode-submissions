class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        unordered_map<int,int>mp;
        vector<vector<int>>freq(nums.size()+1);
        for(int i = 0 ; i<nums.size() ; i++){
            mp[nums[i]]++;
        }

        for(auto it : mp){
            freq[it.second].push_back(it.first);
        }

        for(int i = freq.size()-1 ; i>= 0 ; i--){
            for(int j : freq[i]){
                res.push_back(j);
                if(res.size() == k){
                    return res;
                }
            }
        }
        return res;
    }
};
