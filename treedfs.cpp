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
        TreeNode* dfs(TreeNode* root){
            if (!root){
                return nullptr;
            }
            cout<<root->val<<endl;
            dfs(root->left);
            dfs(root->right);
        }

        TreeNode* invertTree(TreeNode* root) {
            dfs(root);
        }
    };