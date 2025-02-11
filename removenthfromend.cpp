struct ListNode {
         int val;
         ListNode *next;
         ListNode() : val(0), next(nullptr) {}
         ListNode(int x) : val(x), next(nullptr) {}
         ListNode(int x, ListNode *next) : val(x), next(next) {}
     };

 class Solution {
    public:
        int getSize(ListNode* head){
            int size = 0;
            while(head){
                size += 1;
                head = head->next;
            }

            return size;
        }

        ListNode* removeNthFromEnd(ListNode* head, int n) {
            int rmvIndex = getSize(head) - n;
            if (rmvIndex == 0){
                if (getSize(head)==1){
                    delete head;
                    head = nullptr;
                    return head;
                }
                ListNode* copyNext = head->next;
                delete head;
                head = copyNext;
                return head;
            }

            ListNode* copy = head;
            int counter = 0;
            while(counter < (rmvIndex-1)){
                copy = copy->next;
                counter += 1;
            }

            ListNode* copyNext = copy->next->next;
            delete copy->next;
            copy->next = nullptr;
            copy->next = copyNext;

            return head;
        }
    };
    