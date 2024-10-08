class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        group = []
        onlyOnce = set()
        #Function that returns true if two words are anagrams of each other
        def isAnagram(s: str, t: str) -> bool:
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
        
        for i in range(len(strs)):
            wordGroup  = [strs[i]]
            if strs[i] not in onlyOnce:
                onlyOnce.add(strs[i])
            else:
                continue
            for j in range(i+1,len(strs)):
                if isAnagram(strs[j],strs[i]):
                    wordGroup.append(strs[j])
                    if strs[j] not in onlyOnce:
                        onlyOnce.add(strs[j])
            group.append(wordGroup)

        return group

s = Solution()
print(s.groupAnagrams(["x"]))