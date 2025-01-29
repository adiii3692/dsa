class Solution:
    def maxArea(self, heights: list[int]) -> int:
        l,r = 0,len(heights)-1
        areaMax = 0
        while(l<r):
            width = r - l
            height = min(heights[l],heights[r])
            area = width * height
            areaMax = max(areaMax,area)
            if heights[l] < heights[r]:
                l += 1
            else:
                r -= 1
        
        return areaMax