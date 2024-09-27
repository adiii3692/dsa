class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s1 = dict()
        s2 = dict()
        for i in s:
            if i not in s1:
                s1[i] = 1
            else:
                s1[i] += 1
        
        for j in t:
            if j not in s2:
                s2[j] = 1
            else:
                s2[j] += 1
        
        if len(s1) != len(s2):
            return False
        
        for i in s1:
            if i not in s2 or s1[i]!=s2[i]:
                return False
        
        return True

s = Solution()

print(s.isAnagram("cat","hat"))
