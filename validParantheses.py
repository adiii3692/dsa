class Solution:
    def isValid(self, s: str) -> bool:
        h = {'(':')','[':']','{':'}'}
        order = {}
        correct = True
        
        for index,i in enumerate(s):
            if i==')' or i=='}' or i==']':
                if i not in order:
                    order[i] = index
                continue
        
            if h[i] not in s or s.find(h[i])<s.find(i):
                correct = False

        
        print('order: ',order)
        return correct
    
s = Solution()
print(s.isValid('([)]'))
# python3 validParantheses.py