# Definition for singly-linked list.
from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
class Solution:
    def makeNum(self,l1:ListNode)->int:
        base = 0
        number = 0
        while l1:
            number += pow(10,base) * l1.val
            base += 1
            l1 = l1.next
        
        return number

    def makeList(self,num:int)->ListNode:
        digit = num%10
        num //= 10
        sumNode = ListNode(digit)
        copy = sumNode
        
        while num!=0:
            digit = num%10
            num //= 10
            newNode = ListNode(digit)
            sumNode.next = newNode
            sumNode = sumNode.next
        
        return copy

    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        return self.makeList(self.makeNum(l1)+self.makeNum(l2))
        