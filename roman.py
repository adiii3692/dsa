class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """

        code = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}

        arr = list(map(str,s))

        value = 0
        for i in range(len(arr)):
            if arr[i]=='I' and i!=len(arr)-1:
                if arr[i+1]=='V':
                     value += 4
                     if (i==len(arr)-2):
                         return value
                     i+=2
                     continue
                if arr[i+1]=='X':
                    value+=9
                    if (i==len(arr)-2):
                         return value
                    i+=2
                    continue
            if arr[i]=='X' and i!=len(arr)-1:
                if arr[i+1]=='L':
                    value+=40
                    if (i==len(arr)-2):
                         return value
                    i+=2
                    continue
                if arr[i+1]=='C':
                    value+=90
                    if (i==len(arr)-2):
                         return value
                    i+=2
                    continue
            if arr[i]=='C' and i!=len(arr)-1:
                if arr[i+1]=='D':
                    value+=400
                    if (i==len(arr)-2):
                         return value
                    i+=2
                    continue
                if arr[i+1]=='M':
                    value+=900
                    if (i==len(arr)-2):
                         return value
                    i+=2
                    continue
            value += code[arr[i]]
            print(value)
        return value

s = Solution()
print(s.romanToInt("MCMXCIV"))
        

# I can be placed before V (5) and X (10) to make 4 and 9. 
# X can be placed before L (50) and C (100) to make 40 and 90. 
# C can be placed before D (500) and M (1000) to make 400 and 900.