class Solution:
    def searchRange(self, nums: list[int], target: int) -> list[int]:
        arr = []

        l,r = 0,len(nums)-1

        while(l<=r):
            m = (l+r)//2
            if nums[m]<target:
                l = m+1
            elif nums[m]>target:
                r = m-1
            else:
                return m
                print('Found',nums[m],'at index: ',m)
                arr.append(m)
                if (l==r):
                    return arr
                else:
                    l +=1
        print(arr)

s = Solution()
print(s.searchRange([5,7,7,8,8,10],8))
        