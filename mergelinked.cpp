#include <iostream>
using namespace std;

//  Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

class Solution {
public:

    void placeNode(ListNode* &node, ListNode* &list){
        //node being the node to place and list being the list we have to place the node in
        ListNode* counter{list};
        for(;counter->next->val<=node->val && counter->next!=nullptr;counter=counter->next){
            //Just to get the node after which we need to place the 
        }
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //edge cases
        if ((list1->next==nullptr && list1->val==0) && (list2->next==nullptr && list2->val==0)){
            return list1;
        }
        else if (list1->next==nullptr && list1->val == 0){
            return list2;
        }
        else if (list2->next==nullptr && list2->val == 0){
            return list1;
        }

        
    }
};
