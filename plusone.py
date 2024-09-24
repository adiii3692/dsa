class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        num = ''
        for i in range(len(digits)):
            num += str(digits[i])
        
        num = int(num) + 1
        num = str(num)
        arr = list(map(int, num))
        return(arr)

s = Solution()
print(s.plusOne([9]))