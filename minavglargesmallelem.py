class Solution:
    def minimumAverage(self, nums: list[int]) -> float:
        avgs = 51
        for i in range(len(nums)//2):
            high,low = nums[0],nums[0]
            for elem in nums:
                if elem>high: high = elem
                if elem<low: low = elem
            average = (high + low)/2
            if (average<avgs):avgs = average
            nums.remove(high)
            nums.remove(low)
        
        return avgs
