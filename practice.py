#practicing merge sort

def mergeSort(nums:list[int])->list[int]:
    if len(nums)>1:
        leftArr = nums[:len(nums)//2]
        rightArr = nums[len(nums)//2:]
        
        mergeSort(leftArr)
        mergeSort(rightArr)
        
        i = j = k = 0
        
        while i<len(leftArr) and j<len(rightArr):
            if leftArr[i]<rightArr[j]:
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

arr = [879, -73, 145, 461, 645, 662, -78, 408, 194, 636, 361, 889, 206, 927, 450, -96, 510, 850, 572, 171, 517, 808, -91, 960, 195, 486, -40, 96, 880, -35, 876, 662, 173, 964, 405, 32, 265, 631, 138, 873, 846, 639, 535, 167, -7, 798, 966, -86, 313, 594, -16, 570, 102, 624, 67, 34, 906, 151, 54, 745, -96, 716, 235, -15, 923, 126, 252, -58, -36, 395, 487, 424, 786, 613, 545, 825, 545, 246, 300, 543, -84, 965, 394, 368, 455, 840, 965, 216, 207, 993, 276, 968, 455, 95, 854, 924, 727, 365, 896, -25]

def binarySearch(nums:list[int],target:int)->int:
    print("nums: ",nums)
    l,r = 0,len(nums)-1

    while l<=r:
        m = (l+r)//2
        if nums[m]<target:
            l = m+1
        elif nums[m]>target:
            r = m-1
        else:
            return m

    return -1

print(binarySearch(arr,896))