class Solution:
    def validRow(self,row:list[int]) -> bool:
        rowHash = set()

        for number in row:
            if number == ".": continue
            if number not in rowHash:
                rowHash.add(number)
            else:
                return False
        
        return True
    
    def isValidSudoku(self, board: list[list[str]]) -> bool:        
        for column in range(9):
            columnList = list()
            rowList = list()
            for row in range(9):
                columnList.append(board[row][column])
                rowList.append(board[column][row])

            if not self.validRow(rowList): return False
            if not self.validRow(columnList): return False
        
        boxList = list()
        boxListCounter = 0
        for i in range(9):
            for j in range(9):
                boxList.append(board[i][j])

        if not self.validRow(boxList): return False


        return True

s = Solution()
board = [["1","2","2",".","3",".",".",".","."],
 ["4",".",".","5",".",".",".",".","."],
 [".","9","8",".",".",".",".",".","3"],
 ["5",".",".",".","6",".",".",".","3"],
 [".",".",".","8",".","3",".",".","5"],
 ["7",".",".",".","2",".",".",".","6"],
 [".",".",".",".",".",".","2",".","."],
 [".",".",".","4","1","9",".",".","8"],
 [".",".",".",".","8",".",".","7","9"]]

s.isValidSudoku(board)