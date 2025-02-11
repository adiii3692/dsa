struct ListNode {
         int val;
         ListNode *next;
         ListNode() : val(0), next(nullptr) {}
         ListNode(int x) : val(x), next(nullptr) {}
         ListNode(int x, ListNode *next) : val(x), next(next) {}
     };

class Solution {
    public:
        unsigned long long power(int exp){
            unsigned long long base = 1;
            for(int i{1};i<=exp;i++){
                base *= 10;
            }

            return base;
        }

        unsigned long long makeNum(ListNode* list){
            ListNode* copy = list;
            int base = 0;
            unsigned long long number = 0;
            while(copy){
                number += power(base) * copy->val;
                base += 1;
                copy = copy->next;
            }

            return number;
        }

        ListNode* makeList(unsigned long long num){
            int digit = num%10;
            num /= 10;
            ListNode* sumNode = new ListNode(digit);
            ListNode* copy = sumNode;

            while(num!=0){
                digit = num%10;
                num /= 10;
                ListNode* newNode = new ListNode(digit);
                sumNode->next = newNode;
                sumNode = sumNode->next;
            }

            return copy;
        }

        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            return makeList(makeNum(l1)+makeNum(l2));
        }
    };
    