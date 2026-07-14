class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxP = float('-inf')
        price = prices[0]
        
        for cp in prices:
            price = min(price, cp)
            maxP = max(maxP , cp - price)
        return maxP