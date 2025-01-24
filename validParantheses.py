class Solution:
    def isValid(self, s: str) -> bool:
        if len(s)<=1 or len(s)%2!=0: return False
        stack = list()
        check = {')':'(',
                 ']':'[',
                 '}':'{'}
        
        for char in s:
            if char in check.keys():
                if stack and stack[-1]==check[char]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(char)

        return True if not stack else False