class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for list in matrix:
            if not(target>=list[0] and target<=list[len(list)-1]):
                continue
            l,r = 0,len(list)-1
            while(l<=r):
                mid = (l+r)//2
                if(target>list[mid]):
                    l = mid + 1
                elif (target<list[mid]):
                    r = mid -1
                else:
                    return True
            
        return False