class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int count0 = 0;

        for(int i = 0 ; i< nums.size() ; i++){
            if(nums[i] == 0)count0++;
            else prod *= nums[i];
        }

        if(count0 > 1)return vector<int>(nums.size() , 0);
        vector<int>res(nums.size() , 0);
        for(int i = 0 ; i<nums.size(); i++){
            if(count0 > 0)res[i] = (nums[i] == 0) ? prod : 0;
            else res[i] = prod/nums[i];
        }
        return res;
    }
};
