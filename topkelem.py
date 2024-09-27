class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:

        if len(nums) == 1:
            return nums

        #Create a hashmap
        h = {}

        #Get the frequencies
        for i in nums:
            if i not in h:
                h[i] = 1
            else:
                h[i] += 1
        
        #The values of the keys
        frequencies = list(h.values())

        #Sort the frequencies:
        def mergesort(arr:list[int])->list[int]:
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
                    if (leftArr[i]>rightArr[j]):
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
        mergesort(frequencies)

        #Get the values of the two highest frequencies
        numbers = []
        for i in range(0,k):
            numbers.append(frequencies[i])

        #Get the keys associated with those values
        sol = []
        for key,value in h.items():
            if value in numbers or value in numbers:
                sol.append(key)
        
        #Return solution
        return sol
    
s = Solution()
print(s.topKFrequent([1],1))

