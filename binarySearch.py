def search(nums: list[int], target: int)->int:
    #start off with the indices of the left and right pointers
    l,r = 0,len(nums)-1

    #check if l is always less than or equal to r
    while(l<=r):
        m = (l+r)//2
        if nums[m]>target:
            r = m-1
        elif nums[m]<target:
            l = m+1
        else:
            return m

    return -1


print(search([-1,0,3,5,9,12],2))