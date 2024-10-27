def mergesort(nums:list[int])->list[int]:
    if len(nums)>1:
        leftArr = nums[:len(nums)//2]
        rightArr = nums[len(nums)//2:]
        
        #Recursion
        mergesort(leftArr)
        mergesort(rightArr)
        
        #Merge
        i = j = k = 0
        
        while(i<len(leftArr) and j<len(rightArr)):
            if leftArr[i]<rightArr[j]:
                nums[k] = leftArr[i]
                i += 1
            else:
                nums[k] = rightArr[j]
                j +=1 
            k += 1
        
        while i<len(leftArr):
            nums[k] = leftArr[i]
            k += 1
            i += 1
        
        while j<len(rightArr):
            nums[k] = rightArr[j]
            k += 1
            j += 1
    
nums = [14, 61, 83, 44, 6,
47, 4, 61, 52, 55,
24, 63, 69, 44, 43,
35, 78, 50, 74, 52,
9, 76, 93, 57, 16,
45, 21, 73, 7, 72,
63, 13, 50, 14, 26,
56, 71, 66, 87, 21,
99, 69, 50, 3, 65,
27, 60, 91, 30, 77]

mergesort(nums)    

def binarySearch(nums:list[int],target:int)->int:
    l,r = 0,len(nums)-1
    
    while(l<=r):
        m = (l+r)//2
        if nums[m]<target:
            l = m+1
        elif nums[m]>target:
            r = m-1
        else:
            return m
    return -1

print(nums)
print("Target index: ",nums[binarySearch(nums,77)])
        

