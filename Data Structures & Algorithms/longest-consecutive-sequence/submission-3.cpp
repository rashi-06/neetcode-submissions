class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numSet(nums.begin() , nums.end());
        int res = 0;

        for(auto num : numSet){
            if(numSet.find(num-1) == numSet.end()){
                int longest = 1;
                while(numSet.find(num+longest) != numSet.end()){
                    longest++;
                }
                res = max(res,longest);
            }
        }
        return res;
    }

};
