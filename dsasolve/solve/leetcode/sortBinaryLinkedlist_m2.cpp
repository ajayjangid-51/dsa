struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *solve(ListNode *A)
{
    int k = 0;
    ListNode *p = A;
    while (p)
    {
        if (p->val == 0)
            k++;
        p = p->next;
    }
    p = A;
    while (p)
    {
        if (k > 0)
            p->val = 0;
        else
            p->val = 1;
        k--;
        p = p->next;
    }
    return A;
}
