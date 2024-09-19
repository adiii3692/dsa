class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        #Create a hashmap and store the indices of the various integers
        h = {}
        for index,i in enumerate(nums):
            h[i] = index
        

        for i in range(len(nums)):
            needed = target - nums[i]
            if needed in h and h[needed]!=i:
                return [i,h[needed]]