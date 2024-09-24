class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        removed = []
        count = 0
        for i in range(len(nums)):
            if nums[i] == val:
                removed.append('_')
            else:
                count += 1
                removed.append(nums[i])
        
        return count