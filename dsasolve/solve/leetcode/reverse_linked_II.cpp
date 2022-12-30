/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *reverseBetween(ListNode *A, int B, int C)
{
    if (B == C)
        return A;
    int sz = 0;
    int m = B, n = C;
    ListNode *p = A;
    while (p)
    {
        sz++;
        p = p->next;
    }
    ListNode *previ = 0;
    int t = m - 1;
    p = A;
    while (t--)
    {
        previ = p;
        p = p->next;
    }
    ListNode *starti = p;
    int x = (n - m) + 1;
    ListNode *prev = 0;
    ListNode *curr = p;
    while (x--)
    {
        ListNode *nexti = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nexti;
    }
    if (previ)
    {

        previ->next = prev;
    }
    starti->next = curr;
    if (previ)
    {
        return A;
    }
    else
        return prev;
    // return A;
}
