#include <unordered_set>
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
        ListNode* deleteDuplicates(ListNode* head) {
            if (!head){return head;}
            ListNode* copy = head;
            unordered_set<int> duplicateSet;

            //Remove duplicates first
            while(copy->next!=nullptr){
                if(copy->val == copy->next->val){
                    duplicateSet.insert(copy->val);
                    ListNode* copyNext = copy->next->next;
                    delete copy->next;
                    copy->next = copyNext;
                    continue;
                }
                copy = copy->next;
            }

            //Remove original now
            while(duplicateSet.count(head->val)!=0){
                //Check if the head is a duplicate firstly
                duplicateSet.erase(head->val);
                ListNode* copyNext = head->next; 
                head = copyNext;
                if(copyNext == nullptr){
                    return head;
                }
            }

            ListNode* copyTwo = head;

            while(copyTwo->next!=nullptr){
                if(duplicateSet.count(copyTwo->next->val)!=0){
                    duplicateSet.erase(copyTwo->next->val);
                    ListNode* copyNext = copyTwo->next->next;
                    delete copyTwo->next;
                    copyTwo->next = copyNext;
                    continue;
                }
                copyTwo = copyTwo->next;
            }

            return head;
        }
    };