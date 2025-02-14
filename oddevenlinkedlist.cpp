struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
    public:
        ListNode* oddEvenList(ListNode* head) {
            if ((!head)||(!head->next)){return head;}

            ListNode* even = new ListNode();
            ListNode* evenCopy = even;
            ListNode* odd = new ListNode();
            ListNode* oddCopy = odd;

            int counter = 1;

            ListNode* copy = head;
            while(copy){
                ListNode* nextCopy = copy->next;
                if (counter%2==0){
                    evenCopy->next = copy;
                    evenCopy = evenCopy->next;
                }else{
                    oddCopy->next = copy;
                    oddCopy = oddCopy->next;
                }
                copy = nextCopy;
                counter += 1;
            }

            evenCopy->next = nullptr;
            oddCopy->next = nullptr;

            even = even->next;
            odd = odd->next;

            ListNode* finalOddCopy = odd;
            while(finalOddCopy->next!=nullptr){
                finalOddCopy = finalOddCopy->next;
            }

            finalOddCopy->next = even;
            return odd;
        }
    };