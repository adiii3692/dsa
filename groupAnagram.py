class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        group = []

        #Function that returns true if two words are anagrams of each other
        def anagram(target:str,word:str)->bool:
            if len(target)!=len(word):
                return False
            h = {}
            for i in word:
                if i not in h:
                    h[i] = 1
                else:
                    h[i] += 1
            
            h2 = {}
            for i in word:
                if i not in h2:
                    h2[i] = 1
                else:
                    h2[i] += 1
            
            
            for i in h:
                if i not in h2 or h[i]!=h2[i]:
                    return False
            
            return True
        
        for i in range(len(strs)):
            wordGroup  = [strs[i]]
            for j in range(i+1,len(strs)):
                if anagram(strs[j],strs[i]):
                    wordGroup.append(strs[j])
            group.append(wordGroup)

        print(group)

s = Solution()
s.groupAnagrams(["act","pots","tops","cat","stop","hat"])