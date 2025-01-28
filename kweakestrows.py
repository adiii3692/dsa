class Solution:
    def kWeakestRows(self, mat: list[list[int]], k: int) -> list[int]:
        soldierCount = list()
        for row in mat:
            counter = 0
            while(counter<len(row)):
                if row[counter]!=1:
                    break
                counter += 1
            soldierCount.append(counter)

        indices = list()
        while len(indices)!=k:
                
        print(soldierCount)
        return soldierCount
        