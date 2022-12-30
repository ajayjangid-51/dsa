#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define sz(x) x.size()

#define ll long long
#define pint unsigned int
#define pb push_back
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
#define range(arr) arr.begin(), arr.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak cout << "_______________________________" \
                       << "\n"                              \
                          "\n"
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define forn(i, start, n) for (auto i = start; i < n; i++)
#define io_faster                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

const int MOD = 1000000007;
double PI = 4 * atan(1);

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *rotateRight(ListNode *A, int B)
{
    int sz = 0;
    ListNode *p = A;
    while (p)
    {
        sz++;
        p = p->next;
    }
    if (B > sz)
        B = B % sz;
    debline(sz);
    debline(B);
    int t = sz - B;
    if (t == 0)
        return A;
    t--;
    p = A;

    while (t--)
    {
        p = p->next;
    }
    ListNode *ans = p->next;
    ListNode *anss = p;
    while (p->next)
    {
        p = p->next;
    }
    p->next = A;
    anss->next = 0;

    return ans;
}
void solve()
{
    ListNode *n1 = new ListNode(91);
    ListNode *n2 = new ListNode(34);
    ListNode *n3 = new ListNode(18);
    ListNode *n4 = new ListNode(83);
    ListNode *n5 = new ListNode(38);
    ListNode *n6 = new ListNode(82);
    ListNode *n7 = new ListNode(21);
    ListNode *n8 = new ListNode(69);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = n8;
    ListNode *p = n1;
    while (p)
    {
        print(p->val);
        p = p->next;
    }
    nline;

    p = rotateRight(n1, 89);
    while (p)
    {
        print(p->val);
        p = p->next;
    }
    linebreak;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*  

ListNode* Solution::rotateRight(ListNode* A, int B) {
    int sz = 0;
    ListNode* p = A;
    while(p){
        sz++;
        p= p->next;
    }
    if(B>sz)
        B = B%sz;
    if(B == 0) return A;
    int t = sz-B;
    if(t == 0) return A;
    t--;
    p = A;
    
    while(t--){
         p = p->next;
    }
    ListNode* ans = p->next;
    ListNode* anss = p;
    while(p->next){
        p = p->next;
    }
    p->next = A;
    anss->next =0;

    return ans;
}

*/