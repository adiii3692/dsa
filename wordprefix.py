class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        sentence = sentence.split(' ')
        
        for index,word in enumerate(sentence):
            if(len(word)<len(searchWord)):
                continue
            l,r=0,0
            equals = True
            while(l<len(searchWord)):
                if word[r] != searchWord[l]:
                    equals = False
                    break
                l += 1
                r += 1

            if equals: return index+1
        
        return -1