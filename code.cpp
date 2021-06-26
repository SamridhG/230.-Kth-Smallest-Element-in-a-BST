**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>A;
    void inorder(TreeNode *root)
    {
        if(root)
        {
            inorder(root->left);
            A.push_back(root->val);
            inorder(root->right);
        }
    }
    int kthSmallest(TreeNode* root, int k){
    inorder(root);
        return A[k-1];
    }
};
