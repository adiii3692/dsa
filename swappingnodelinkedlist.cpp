struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  class Solution {
    public:
        ListNode* swapNodes(ListNode* head, int k) {
            if ((!head)||(!head->next)){return head;}

            ListNode* copy = head;
            ListNode* left = head;
            ListNode* right = head;

            for(int i{1};i<k;i++){
                copy = copy->next;
                left = left->next;
            }

            while(copy->next!=nullptr){
                right = right->next;
                copy = copy->next;
            }

            //Now swap the values
            int temp = left->val;
            left->val = right->val;
            right->val = temp;

            return head;
        }
    };