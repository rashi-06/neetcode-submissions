class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        seen = set(nums)
        maxi = 0

        for num in nums:
            if num-1 not in seen:
                maxLen = 1
                while num+maxLen in seen:
                    maxLen += 1
                maxi = max(maxi , maxLen)
        return maxi