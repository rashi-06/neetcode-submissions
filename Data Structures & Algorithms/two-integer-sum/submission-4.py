class Solution:
    def twoSum(self, nums: List[int], tar: int) -> List[int]:
       mp = {}

       for i,n in enumerate(nums):
        diff = tar - n

        if diff in mp:
            return [mp[diff], i]
        mp[n] = i