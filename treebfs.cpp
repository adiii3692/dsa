#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        int maxDepth(TreeNode* root) {
            queue<TreeNode*> q;
            if (root){
                q.push(root);
            }

            int level = 0;
            while(!q.empty()){
                level += 1;
                int size = q.size();
                for(int i = 0;i < size; i++){
                    TreeNode* node = q.front();
                    q.pop();
                    cout<<"Node Val: "<<node->val<<endl;
                    if(node->left){q.push(node->left);}
                    if(node->right){q.push(node->right);}
                }
            }

            return level;
        }
    };