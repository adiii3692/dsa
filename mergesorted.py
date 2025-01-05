def mergesort(arr:list[int]):
    if len(arr)>1:
        left = arr[:len(arr)//2]
        right = arr[len(arr)//2:]
        
        mergesort(left)
        mergesort(right)
        
        i,j,k = 0,0,0
        while(i < len(left) and j < len(right)):
            if(left[i] < right[j]):
                arr[k] = left[i]
                i += 1
            else:
                arr[k] = right[j]
                j += 1
            k += 1
        
        while(i < len(left)):
            arr[k] = left[i]
            k += 1
            i += 1
        
        while(j < len(right)):
            arr[k] = right[j]
            j += 1
            k += 1
        
    return arr

arr = [1,3,7,3,8,22,9,2,7,2,7,4,2]
arr = mergesort(arr)
print(arr)