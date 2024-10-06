def mergesort(nums: list[int])->list[int]:
    if len(nums)>1:
        leftArr = nums[:len(nums)//2]
        rightArr = nums[len(nums)//2:]
        
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