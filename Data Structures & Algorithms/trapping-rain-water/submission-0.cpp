class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int res = 0;
        
        int l = 0;
        int r = n-1;

        int leftM = height[l];
        int rightM = height[r];

        while(l < r){
            if(leftM < rightM){
                l++;
                leftM = max(leftM , height[l]);
                res += leftM - height[l];
            }
            else{
                r--;
                rightM = max(rightM , height[r]);
                res += rightM - height[r];
            }
        }
        return res;
    }
};
