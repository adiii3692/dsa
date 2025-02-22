# Definition for singly-linked list.
from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        mergedNode = ListNode()
        copy = mergedNode
        while(list1 and list2):
            if(list1.val < list2.val):
                copy.next = list1
                list1 = list1.next
            else:
                copy.next = list2
                list2 = list2.next
            copy = copy.next
        
        if list1: copy.next = list1
        else: copy.next = list2

        return mergedNode.next