class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        hashSet = set()
        #Validate Row
        for row in board:
            for number in row:
                if number == '.':
                    continue
                if number not in hashSet:
                    hashSet.add(number)
                else:
                    return False
            hashSet.clear()
        
        #Validate Column
        for i in range(9):
            for j in range(9):
                if board[j][i] == '.':
                    continue
                if board[j][i] not in hashSet:
                    hashSet.add(board[j][i])
                else:
                    return False
            hashSet.clear()
        
        #Validate sub-boxes
        for i in (0,3,6):
            for j in (0,3,6):
                box = [board[a][b] for a in range(i,i+3) for b in range(j,j+3)]
                for num in box:
                    if num == '.':
                        continue
                    if num not in hashSet: 
                        hashSet.add(num)
                    else:
                        return False
                hashSet.clear()
        
        return True