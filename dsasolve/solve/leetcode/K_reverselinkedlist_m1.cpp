/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::reverseList(ListNode *A, int B)
{
    vector<int> v;
    ListNode *p = A;
    while (p)
    {
        v.push_back(p->val);
        p = p->next;
    }
    auto it = v.begin();
    while (it != v.end())
    {
        reverse(it, it + B);
        it += B;
    }
    p = A;
    int i = 0;
    while (p)
    {
        p->val = v[i];
        i++;
        p = p->next;
    }
    return A;
}
