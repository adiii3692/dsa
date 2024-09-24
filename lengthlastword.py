class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        if ' ' not in s:
            return len(s)
        
        arr = s.split(' ')

        for i in range(len(arr)-1,-1,-1):
            if arr[i]=='' or arr[i]==' ' or arr[i].isnumeric():
                continue
            return(len(arr[i]))
        
s = Solution()
print(s.lengthOfLastWord("a "))