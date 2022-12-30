struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

#define vi vector<int>
vi v1, v2;
void dfs1(TreeNode *node)
{
    v1.push_back(node->val);
    if (node->left)
        dfs1(node->left);
    if (node->right)
        dfs1(node->right);
}
void dfs2(TreeNode *node)
{
    v2.push_back(node->val);
    if (node->right)
        dfs2(node->right);
    if (node->left)
        dfs2(node->left);
}
int isSymmetric(TreeNode *A)
{
    v1.clear(), v2.clear();
    dfs1(A);
    dfs2(A);
    if (v1.size() % 2 == 0)
        return 0;

    return (v1 == v2);
}
