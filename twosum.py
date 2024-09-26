class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        h = {}
        for i in range(len(nums)):
            h[nums[i]] = i
        
        for i in range(len(nums)):
            needed = target - nums[i]
            if needed in h and h[needed]!=i:
                return [i,h[needed]]
        
        return [-1,-1]