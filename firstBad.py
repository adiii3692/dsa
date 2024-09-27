# The isBadVersion API is already defined for you.
def isBadVersion(version: int) -> bool:
    bad = 4
    if version >= bad:
        return True

    return False

class Solution:
    def firstBadVersion(self, n: int) -> int:
         arr = [i for i in range(1,n+1)]

         #binary search
         def binarySearch(nums:list[int],target:int)->int:
             l,r = 0,len(nums)-1
             m = 0
             while(l<r):
                 m = (l+r)//2
                 if isBadVersion(nums[m]):
                     r = m
                 else:
                     l = m
            
             return nums[m]
         
         print(binarySearch(arr,n))
         

                
                     
                    


s = Solution()

s.firstBadVersion(5)
