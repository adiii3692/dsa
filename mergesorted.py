class Solution:
    def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        for i in range(m):
            nums1[m] = 
        
        def mergesort(nums:list[int])->list[int]:
            
            if len(nums)>1:
            
                leftArr = nums[:len(nums)//2]
                rightArr = nums[len(nums)//2:]
            
                mergesort(leftArr)
                mergesort(rightArr)
                
                i = j = k = 0
                
                while i<len(leftArr) and j<len(rightArr):
                    if leftArr[i] < rightArr[j]:
                        nums[k] = leftArr[i]
                        i += 1
                    else:
                        nums[k] = rightArr[j]
                        j += 1
                    k += 1
                
                while i<len(leftArr):
                    nums[k] = leftArr[i]
                    i += 1
                    k += 1
                
                while j<len(rightArr):
                    nums[k] = rightArr[j]
                    j += 1
                    k += 1
                    
            return nums
             
        mergesort(arr3) 

        nums1 = arr3

s = Solution()

nums1 = [1,2,3,0,0,0]
nums2 = [2,5,6]

s.merge(nums1,3,nums2,3)

print(nums1)
        
        