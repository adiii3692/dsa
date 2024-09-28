#python3 prodarrexcself.py
class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:

        sol = []

        for i in range(len(nums)):
            product = 1
            hasZero = False
            for j in range(len(nums)):
                if i== j:
                    continue
                if nums[j] == 0:
                    sol.append(0)
                    hasZero = True
                    break
                else:
                    product *= nums[j]
            if hasZero:
                continue
            sol.append(product)
        
        return sol

s = Solution()
print(s.productExceptSelf([0,8,0]))