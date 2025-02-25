class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        result = list()

        if len(nums)<4: return []

        for i in range(len(nums)-3):
            for j in range(i+1,len(nums)-2):
                l,r = j + 1, len(nums) - 1
                while l<r:
                    sum = nums[i] + nums[j] + nums[l] + nums[r]
                    if sum>target:
                        r -= 1
                    elif sum<target:
                        l += 1
                    else:
                        if [nums[i],nums[j],nums[l],nums[r]] not in result: result.append([nums[i],nums[j],nums[l],nums[r]])
                        l += 1
                        r -= 1
        
        return result