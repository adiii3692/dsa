class Solution(object):
    def fourSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        
        h = {}

        for i in nums:
            if i not in h:
                h[i] = 1
                continue
            h[i] += 1
        
        print(h)

    
obj = Solution()

obj.fourSum(nums=[1,0,-1,0,-2,2],target=0)