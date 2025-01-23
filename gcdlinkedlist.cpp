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

    int gcd(int a, int b){
        //If zeroes
        if(a==0){
            return b;
        }
        if(b==0){
            return a;
        }
        if(a==b){
            return a;
        }
        if(a>b){
            return gcd((a-b),b);
        }

        return gcd(a,(b-a));
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if((head==nullptr)||(head->next==nullptr)){
            return head;
        }

        ListNode* copy = head;

        while(copy->next!=nullptr){
            ListNode* copyNext = copy->next;
            ListNode* newNode = new ListNode(gcd(copy->val,copy->next->val),copy->next);
            copy->next = newNode;
            copy = copyNext;
        }

        return head;
    }
};