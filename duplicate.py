class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        index = 0
        h = []
        for i in range(len(nums)):
            if nums[i] not in h:
                h.append(nums[i])
                nums[index] = nums[i]
                index += 1
        print("nums: ",nums)
        return index

s = Solution()
nums = [0,0,1,1,1,2,2,3,3,4]
s.removeDuplicates(nums)