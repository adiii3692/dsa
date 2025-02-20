class Solution:
    def isNice(self, s:str) -> bool:
        if len(s)<=1: return False
        charSet = set()
        for char in s:
            if char not in charSet:
                charSet.add(char)
        for char in charSet:
            if char.islower():
                if char.upper() not in charSet:
                    return False
            else:
                if char.lower() not in charSet:
                    return False
        
        return True
            
    def longestNiceSubstring(self, s: str) -> str:
        if len(s)<=1: return ""
        bestString = ""
        l,r = 0,1
        while l<len(s):
            if r > len(s):
                l += 1
                r = l + 1
                continue
            subString = ''.join(list(s)[l:r])
            if self.isNice(subString):
                if len(subString) > len(bestString):
                    bestString = subString
            r += 1
        
        return bestString
