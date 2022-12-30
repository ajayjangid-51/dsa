/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> v;
int i = 0;
void Inorder(TreeNode *node)
{
    if (node)
    {
        Inorder(node->left);
        v.push_back(node->val);
        Inorder(node->right);
    }
}

BSTIterator::BSTIterator(TreeNode *root)
{
    v.clear();
    i = 0;
    Inorder(root);
    // this->root = root;
    // this->p = root;
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext()
{
    return (i < v.size()) ? 1 : 0;
}

/** @return the next smallest number */
int BSTIterator::next()
{

    return v[i++];
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
