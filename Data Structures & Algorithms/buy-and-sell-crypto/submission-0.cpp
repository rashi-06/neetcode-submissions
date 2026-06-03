class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxP = INT_MIN;

        for(int i = 0 ; i<prices.size() ; i++){
            mini = min(mini , prices[i]);
            maxP = max(maxP, prices[i] - mini);
        }
        return maxP;
    }
};
