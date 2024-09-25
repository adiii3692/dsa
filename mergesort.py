def mergesort(arr: list[int])->list[int]:

    #If an array is not a single element, recursively split it into two arrays 
    if len(arr) > 1:
        leftArr = arr[:len(arr)//2]
        rightArr = arr[len(arr)//2:]
        
        #recursion
        mergesort(leftArr)
        mergesort(rightArr)

        #Now you merge the arrays
        

    return arr

arr = [1,546,1,675,156425,12,52,-4,624,0,41,54]
print(mergesort(arr))