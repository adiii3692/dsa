def mergesort(nums: list[int])->list[int]:
    if len(nums)>1:
        leftArr = nums[:len(nums)//2]
        rightArr = nums[len(nums)//2:]
        
        mergesort(leftArr)
        mergesort(rightArr)
        
        i=j=k=0
        
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
            k += 1
            i += 1
        
        while j<len(rightArr):
            nums[k] = rightArr[j]
            k += 1
            j += 1
        
        
    return nums

def binarySearch(nums:list[int], target: int)->int:
    l,r = 0,len(nums)-1
    
    while l<=r:
        m = (l+r)//2
        
        if nums[m]<target:
            l = m+1
        elif nums[m] >target:
            r = m-1
        else:
            return m
    
    return -1

arr = [330, 336, 367, 974, 449, 294, 194, 769, 869, 261, 919, 197, 556, 843, 503, 943, 601, 541, 265, 992, 632, 177, 496, -51, 619, 149, 71, 349, 740, -55, 702, 702, 673, 584, 771, 397, 581, 417, -46, 740, 914, 791, -80, -64, -5, 902, 671, 623, 249, 483, 233, 27, 379, 388, 741, 102, 388, 554, 20, 82, 815, 188, 639, -42, 833, 550, 938, 809, 961, 96, 7, 810, 505, 151, 634, 734, 559, 141, 639, 561, -40, 195, 444, 371, -93, 342, 260, 600, 456, 765, 358, 415, 682, 512, 135, 153, 749, 258, 465, -74]

mergesort(arr)

print(binarySearch(arr,-74))