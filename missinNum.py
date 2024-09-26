class Solution:
    def missingNumber(self, nums: list[int]) -> int:

        #Do merge sort:
        def mergeSort(arr:list[int])->list[int]:

            if len(arr)>1:
                leftArr = arr[:len(arr)//2]
                rightArr = arr[len(arr)//2:]

                #recursively call mergeSort
                mergeSort(leftArr)
                mergeSort(rightArr)

                #merge arrays
                i = j = k = 0
                while i<len(leftArr) and j<len(rightArr):
                    if leftArr[i]<rightArr[j]:
                        arr[k] = leftArr[i]
                        i +=1
                    else:
                        arr[k] = rightArr[j]
                        j +=1
                    k += 1
                
                while(i<len(leftArr)):
                    arr[k] = leftArr[i]
                    i += 1
                    k += 1
                
                while(j<len(rightArr)):
                    arr[k] = rightArr[j]
                    j += 1
                    k += 1

            
            return arr

        nums = mergeSort(nums)

        #binary search to find a number
        def binarySearch(nums:list[int],target:int)->int:
            #left and right pointers
            l,r = 0,len(nums)-1

            while(l<=r):
                m = (l+r)//2
                if nums[m]<target:
                    l = m+1
                elif nums[m]>target:
                    r = m-1
                else:
                    #return the index if found
                    return m
            #return the index if not found
            return -1

        for i in range(len(nums)+1):
            if binarySearch(nums,i)==-1:
                return i

s = Solution()
print(s.missingNumber([0,1]))
