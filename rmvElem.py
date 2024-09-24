class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        count = 0
        for i in range(len(nums)):
            if (nums[i]!=val):
                nums[count] = nums[i]
                count +=1
        
        return count

s = Solution()
nums = [3,2,2,3]
s.removeElement(nums,3)

print("nums: ",nums)