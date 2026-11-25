class Solution:
    def twoSum(self, nums: List[int], tar: int) -> List[int]:
        l, r = 0, len(nums) -1

        while l<r:
            if nums[l] + nums[r] < tar:
                l += 1
            elif nums[l] + nums[r] > tar:
                r -= 1
            else:
                return [l+1, r+1]
        return []