#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
    ListNode* sortList(ListNode* head) {
        if(!head || !(head->next)){
            return head;
        }

        //Find the mid of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = nullptr;

        while(fast!=nullptr && fast->next!=nullptr){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        temp->next = nullptr;

        //Recursion to divide the linked lists
        ListNode* left = sortList(head);
        ListNode* right = sortList(slow);

        ListNode* finalList = new ListNode();
        ListNode* mergedList = finalList;

        //Merge sort now
        while(left && right){
            if(left->val < right->val){
                mergedList->next = left;
                left = left->next;
            }
            else{
                mergedList->next = right;
                right = right->next;
            }
            mergedList = mergedList->next;
        }

        if(left){
            mergedList->next = left;
        }else{
            mergedList->next = right;
        }

        return finalList->next;
    }

        ListNode* mergeKLists(vector<ListNode*>& lists) {
            if (lists.size()==0){return nullptr;}
            ListNode* mergedList = new ListNode();
            ListNode* copyMerged = mergedList;
            for(ListNode* elem : lists){
                ListNode* copy = elem;
                while(copy){
                    copyMerged->next = copy;
                    copyMerged = copyMerged->next;
                    copy = copy->next;
                }
            }

            copyMerged->next = nullptr;

            return sortList(mergedList->next);
        }
    };