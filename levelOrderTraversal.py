# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        queue = list()

        if not root: return list()

        queue.append(root)
        
        result = list()

        while len(queue) > 0:
            levelLen = len(queue)
            subList = list()
            for i in range(levelLen):
                if queue[0].left: queue.append(queue[0].left)
                if queue[0].right: queue.append(queue[0].right)

                subList.append(queue.pop(0).val)
            result.append(subList)
        
        return result


        