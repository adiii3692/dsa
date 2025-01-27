class Solution:
    def countPairs(self, nums: List[int], target: int) -> int:
        counter = 0
        if len(nums)<=1:
            return 0

        for i in range(len(nums)-1):
            for j in range(i+1,len(nums)):
                if nums[i] + nums[j] < target:
                    counter += 1
        
        return counter
