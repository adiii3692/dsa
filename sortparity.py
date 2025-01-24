class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        if(len(nums)<=1):return nums
        l,r = 0,0
        while(r<len(nums)):
            if(nums[r]%2==0):
                copy = nums[l]
                nums[l] = nums[r]
                nums[r] = copy
                l += 1
            r += 1
        return nums
            
                