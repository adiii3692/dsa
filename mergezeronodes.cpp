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
            head;
        }

        ListNode* copy = head;
        int arr[3] = {};
        int counter = 0;
        int sum = 0;
        bool start = false;
        while(copy!=nullptr){
            //What to do in case you encounter a zero during iteration
            if(copy->val==0){
                if(start){
                    arr[counter] = sum;
                    counter += 1;
                    sum = 0;
                    start = false;
                    continue;
                }
                start = true;
                copy = copy->next;
                continue;
            }

            sum += copy->val;
            copy = copy->next;
        }

        cout<<"The sum 1: "<<arr[0]<<endl;
        cout<<"The sum 2: "<<arr[1]<<endl;
        cout<<"The sum 3: "<<arr[2]<<endl;

        return head;
    }
};