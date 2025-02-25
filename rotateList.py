# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head:
            return head
        
        length = 1
        lastNode = head

        while lastNode.next:
            lastNode = lastNode.next
            length += 1
        
        if k == length: return head

        if k > length: k = k % length

        lastNode.next = head
        print("Length: ",length)

        tempNode = head
        for _ in range(length - k - 1):
            tempNode = tempNode.next
        
        newHead = tempNode.next
        tempNode.next = None

        return newHead