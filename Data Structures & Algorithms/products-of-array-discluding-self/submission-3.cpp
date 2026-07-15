class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(nums.size() , 0);
        int prod = 1;
        int zeroCounter = 0;

        for(int i = 0 ;i<nums.size(); i++){
            if(nums[i] == 0)zeroCounter++;
            else prod *= nums[i];
        }
        if(zeroCounter >1)return res;

        for(int i = 0 ; i<nums.size(); i++){
            if(zeroCounter > 0){
                res[i] = (nums[i] == 0) ? prod : 0;
            }
            else{
                res[i] = prod/nums[i];
            }
        }
        
        return res;
    }
};
