class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
      prod, zero_count = 1, 0

      for num in nums:
        if num:
            prod *= num
        else:
            zero_count += 1
      
      if zero_count > 1: return [0]*len(nums)
      
      res = [0]*len(nums)

      for i, n in enumerate(nums):
        if zero_count: 
            res[i] = 0 if n else prod
        else:
            res[i] = prod//n
    
      return res;