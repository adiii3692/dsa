class Solution:
    def dailyTemperatures(self, temperatures: list[int]) -> list[int]:
        if len(temperatures) < 2: return [0]
        diff = list()
        for i in range(len(temperatures) - 1):
            exist = False
            for j in range(i+1,len(temperatures)):
                if temperatures[j] > temperatures[i]:
                    exist = True
                    list.append(j - i)
                    break
            if not exist:
                
            
            