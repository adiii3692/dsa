#include <unordered_set>
#include <iostream>
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

        bool hasCycle(ListNode* head) {
            if (head==nullptr || head->next==nullptr){return false;}
            
            unordered_set<ListNode*> addressSet;
            ListNode* copy = head;

            while(copy){
                if (addressSet.count(copy)==0){
                    addressSet.insert(copy);
                    copy = copy->next;
                }
                else{
                    return true;
                }
                
            }

            for(ListNode* elem: addressSet){
                cout<<elem<<endl;
            }

            return false;
        }
    };