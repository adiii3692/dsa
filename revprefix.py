class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        word = list(word)
        for index,letter in enumerate(word):
            if letter==ch:
                l,r = 0,index
                while(l<r):
                    copy = word[l]
                    word[l] = word[r]
                    word[r] = copy
                    l += 1
                    r -= 1
                break
        
        return ''.join(word)