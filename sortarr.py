class Solution:
    def sortArray(self, nums: list[int])->list[int]:

        if len(nums)>1:
            #split arrays
            leftArr = nums[:len(nums)//2]
            rightArr = nums[len(nums)//2:]

            #Recursively call merge sort on them
            self.sortArray(leftArr)
            self.sortArray(rightArr)

            #Now you merge them
            i = 0
            j = 0
            k = 0 

            while (i<len(leftArr) and j<len(rightArr)):
                if leftArr[i] < rightArr[j]:
                    nums[k] = leftArr[i]
                    i += 1
                else:
                    nums[k] = rightArr[j]
                    j += 1
                k += 1
            
            while(i<len(leftArr)):
                nums[k] = leftArr[i]
                i += 1
                k += 1
            
            while(j<len(rightArr)):
                nums[k] = rightArr[j]
                j += 1
                k += 1

        return nums
    
s = Solution()

nums = [5,1,1,2,0,0]

print(s.sortArray(nums))