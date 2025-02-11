# Definition for singly-linked list.
from typing import Optional


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        addressSet = set()
        copy =  head
        while copy:
            if copy not in addressSet: 
                addressSet.add(copy)
                copy = copy.next
            else:
                return True

        return False