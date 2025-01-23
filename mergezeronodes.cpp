// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }

        ListNode* counter = head;
        int zeroCounter = 0;
        int sum = 0;

        while(counter!=nullptr){
            //If at a zero, increment zero counter
            if(counter->val == 0){
                zeroCounter += 1;
                counter = counter->next;
                continue;
            }
            //If next node is a zero, add the merged node before the zero
            if(counter->next->val==0){
                ListNode* merged = new ListNode(sum,nullptr);
                //If first merged node, make it the head
                if(zeroCounter==1){
                    head = merged;
                    counter = counter->next;
                    continue;
                }
                else{
                    head->next = merged;
                }
            }
        }

        return head;
    }
};