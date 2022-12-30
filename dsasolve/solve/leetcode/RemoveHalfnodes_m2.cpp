/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode *postOrder(TreeNode *root)
{
    if (root)
    {
        postOrder(root->left);
        postOrder(root->right);
        if (root->left and root->right or !root->left and !root->right)
        {
        }
        else
        {
            if (root->left)
            {
                TreeNode *temp = root->left;
                //  root = temp;
                root->val = temp->val;
                root->left = temp->left;
                root->right = temp->right;
                free(temp);
            }
            if (root->right)
            {
                TreeNode *temp = root->right;
                //  root= temp;
                root->val = temp->val;
                root->left = temp->left;
                root->right = temp->right;
                free(temp);
            }
        }
    }
    return root;
}
TreeNode *Solution::solve(TreeNode *A)
{
    return postOrder(A);
}
