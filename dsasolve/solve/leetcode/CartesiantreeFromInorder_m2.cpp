/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#define vb vector<bool>
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vi>
#define vvb vector<vb>
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define print(x) cout << x << " "
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
// mid-element is greatest-element
// and then in left-part root-element will be greatest-one and and for right-part root-element will greater element.
pair<int, int> findMax(vi &A, int start, int end)
{
    pii p;
    int max = INT_MIN;
    for (int i = start; i <= end; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            p.first = max;
            p.second = i;
        }
    }
    return p;
}
// here creating tree in dfs-manner.
TreeNode *fn(vi &A, int first, int end)
{
    if (first > end)
        return 0;
    pii pr = findMax(A, first, end);
    TreeNode *p = new TreeNode(pr.first);
    p->left = fn(A, first, pr.second - 1);
    p->right = fn(A, pr.second + 1, end);

    return p;
}
TreeNode *Solution::buildTree(vector<int> &A)
{
    return fn(A, 0, (A.size() - 1));
}
