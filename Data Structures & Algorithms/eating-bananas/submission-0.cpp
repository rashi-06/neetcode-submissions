class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin() , piles.end());
        while(left <right){
            int mid = (left+right)/2;
            int hrsSpent = 0;
            for(int pile : piles){
                hrsSpent += pile/mid+(pile%mid != 0);
            }
            
            if(hrsSpent <= h)right = mid;
            else left = mid+1;
        }
        return right;
    }
};
