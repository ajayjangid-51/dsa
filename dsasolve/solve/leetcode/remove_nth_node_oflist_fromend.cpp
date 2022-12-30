
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *removeNthFromEnd(ListNode *A, int B)
{
    int sz = 0;
    ListNode *p = A;
    while (p)
    {
        sz++;
        p = p->next;
    }
    if (B >= sz)
        return A->next;
    p = A;
    sz = sz - B;
    ListNode *prev = 0;
    while (sz--)
    {
        prev = p;
        p = p->next;
    }
    prev->next = p->next;
    return A;
}
// by AjayJangid.SVNIT
