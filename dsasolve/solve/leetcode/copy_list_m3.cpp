/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode *Solution::copyRandomList(RandomListNode *A)
{
    // favourited bcoz bcoz it taken verylong 241min continours minute to get coorect-answer,
    // but as usual the default-approach was very easy-straightforward and short.
    map<RandomListNode *, RandomListNode *> mp;
    RandomListNode *p = A;
    while (p)
    {
        RandomListNode *p1 = new RandomListNode(p->label);
        mp[p] = p1;
        p = p->next;
    }
    p = A;
    while (p)
    {
        mp[p]->next = mp[p->next];
        mp[p]->random = mp[p->random];
        p = p->next;
    }

    return mp[A];
}
