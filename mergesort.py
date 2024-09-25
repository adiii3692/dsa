def mergesort(arr: list[int])->list[int]:

    #If an array is not a single element, recursively split it into two arrays 
    if len(arr) > 1:
        leftArr = arr[:len(arr)//2]
        rightArr = arr[len(arr)//2:]
        
        #recursion
        mergesort(leftArr)
        mergesort(rightArr)

        #Now you merge the arrays
        i = 0 #left array index
        j = 0 #Right array index
        k = 0 #Index for merged array

        #Compare the left array and the right array and move the smaller one to the merged array
        while(i<len(leftArr) and j<len(rightArr)):
            if (leftArr[i]<rightArr[j]):
                arr[k] = leftArr[i]
                i +=1
            else:
                arr[k] = rightArr[j]
                j += 1
            k += 1
        
        #Once you've transferred all values from one of the arrays, add the remaining ones to the merged array
        while (i<len(leftArr)):
            arr[k] = leftArr[i]
            i += 1
            k += 1
        while(j<len(rightArr)):
            arr[k] =  rightArr[j]
            j += 1
            k += 1

             

    return arr

arr = [1,546,1,675,156425,12,52,-4,624,0,41,54]
print(mergesort(arr))