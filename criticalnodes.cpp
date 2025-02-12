struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

class Solution {
    public:
        vector<int> nodesBetweenCriticalPoints(ListNode* head) {
            vector<int> criticalIndex;
            ListNode* copy = head->next;
            int counter = 2;
            int prevVal = head->val;
            while(copy->next!=nullptr){
                if((copy->val > prevVal)&&(copy->val > copy->next->val)){criticalIndex.push_back(counter);}
                else if((copy->val < prevVal)&&(copy->val < copy->next->val)){criticalIndex.push_back(counter);}
                counter += 1;
                prevVal = copy->val;
                copy = copy->next;
            }

            if (criticalIndex.size()<2){
                return vector<int>{-1,-1};
            }
            
            int min = INT_MAX;

            for(int i{0};i<criticalIndex.size()-1;i++){
                if(abs(criticalIndex[i] - criticalIndex[i+1])<min){
                    min = abs(criticalIndex[i] - criticalIndex[i+1]);
                }
            }

            vector<int> sol(2);
            sol[0] = min;
            sol[1] = criticalIndex[criticalIndex.size()-1] - criticalIndex[0];
            return sol;
        }
    };