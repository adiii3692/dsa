class Solution:
    def mergeSort(self,nums:list[int]):
        if len(nums)>1:
            left = nums[:len(nums)//2]
            right = nums[len(nums)//2:]

            self.mergeSort(left)
            self.mergeSort(right)

            i = j = k = 0
            
            while(i<len(left) and j<len(right)):
                if left[i] < right[j]:
                    nums[k] = left[i]
                    i += 1
                else:
                    nums[k] = right[j]
                    j += 1
                k += 1
            
            while(i<len(left)):
                nums[k] = left[i]
                i += 1
                k += 1
            
            while(j<len(right)):
                nums[k] = right[j]
                j += 1
                k += 1
    

    def longestConsecutive(self, nums: list[int]) -> int:
        if len(nums) == 0: return 0
        
        self.mergeSort(nums)
        counter = 1
        biggestCounter = 1

        for i in range(len(nums)-1):
            if nums[i] == nums[i+1]:
                continue
            if (nums[i]+1) != nums[i+1]:
                counter = 1
                continue
            else:
                counter += 1
            if counter > biggestCounter: biggestCounter = counter

        return biggestCounter