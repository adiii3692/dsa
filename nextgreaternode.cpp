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
        vector<int> nextLargerNodes(ListNode* head) {
            if((!head)||(!head->next)){
                return vector<int>{0};
            }

            ListNode* left = head;
            ListNode* right = head->next;

            vector<int> result ={};
            while(left){
                if(!right){
                    result.push_back(0);
                    left = left->next;
                    if (left){right = left->next;}
                    else{break;}
                }
                else{
                    if(right->val>left->val){
                        result.push_back(right->val);
                        left = left->next;
                        if (left){right = left->next;}
                        else{break;}
                    }
                    else{
                        right = right->next;
                    }
                }
            }

            return result;
        }
    };