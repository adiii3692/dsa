class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) <= 1:
            return len(s)
        maxLen = 0
        l = 0
        charSet = set()
        for r in range(len(s)):
            if s[r] not in charSet:
                charSet.add(s[r])
                maxLen = max(maxLen,r-l+1)
            else:
                while s[r] in charSet:
                    charSet.remove(s[l])
                    l += 1
                charSet.add(s[r])

        return maxLen
        