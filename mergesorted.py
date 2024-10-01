class Solution:
    def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        arr1 = list()
        arr2 = list()
        
        for i in range(m):
            arr1.append(nums1[i])
        
        for i in range(n):
            arr2.append(nums2[i])
        
        arr3 = arr1 + arr2
        
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
        print(arr3)

s = Solution()

s.merge([1,2,3,0,0,0],3,[2,5,6],3)
        
        