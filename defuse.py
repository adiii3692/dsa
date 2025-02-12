class Solution:
    def decrypt(self, code: list[int], k: int) -> list[int]:
        if k==0:
            code = [0 for i in range(len(code))]
            return code
        if k>0:
            l,r=0,1
            while l<len(code):
                if r==len(code): r=0
                

s = Solution()
code = [1,2,3,4]
print(s.decrypt(code,0))