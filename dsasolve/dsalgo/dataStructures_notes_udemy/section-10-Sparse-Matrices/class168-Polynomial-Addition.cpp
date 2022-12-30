//🔥💲🍕 NOW aab apn "Polynomial-Addition" dekhenge mtlb 2-diff polynomial ko add krna dekhenge.. 🍕💲🔥

#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define ps(x) printf("\n%s", x);
#define pi(x) printf("\n%d", x);
#define si(x) scanf("%d", &x);
#define ss(x) scanf("%s", &x);
#define deb(x) cout << #x << " = " << x << endl;
#define fo(i, start, n) for (int i = start; i < n; i++)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pair<int, int>> vi2d;
typedef map<int, int> mpii;
typedef set<int> si;

struct Term
{
    int c;
    int e;
};
struct Polynomial
{
    int n;
    Term *p;
};

Polynomial *AddPolynomial(Polynomial p1, Polynomial p2)
{
    Polynomial *p3 = new Polynomial;
    // p3->n = max(p1.n, p2.n);
    // p3->n = p1.n + p2.n;
    p3->p = new Term[p1.n + p2.n];
    int x = 0, y = 0, z = 0;
    while (x < p1.n && y < p2.n)
    {
        if (p1.p[x].e < p2.p[y].e)
        {
            p3->p[z] = p2.p[y];
            z++, y++;
        }
        else if (p1.p[x].e > p2.p[y].e)
        {
            p3->p[z] = p1.p[x];
            z++, x++;
        }
        else if (p1.p[x].e == p2.p[y].e)
        {
            p3->p[z] = p1.p[x];
            p3->p[z].c += p2.p[y].c;
            z++, y++, x++;
        }
    }
    fo(x, x, p1.n) p3->p[z++] = p1.p[x];
    fo(y, y, p2.n) p3->p[z++] = p2.p[y];
    p3->n = z;

    return p3;
}
void Create(Polynomial &p);
void DisplayPolynomial(Polynomial p);

int main()
{
    Polynomial p1, p2;
    Create(p1);
    Create(p2);
    DisplayPolynomial(p1);
    cout << endl;
    DisplayPolynomial(p2);
    cout << endl;

    Polynomial *p3 = AddPolynomial(p1, p2);
    cout << endl;
    DisplayPolynomial(*p3);

    return 0;
}

void Create(Polynomial &p)
{
    cout << "enter the number of terms in your Polynomial" << endl;
    cin >> p.n;
    p.p = new Term[p.n];
    cout << "Okay now enter your Polynomial by just mentioning only coefficient and Exponent term-by-term" << endl;
    fo(i, 0, p.n)
    {
        cin >> p.p[i].c >> p.p[i].e;
    }
}

void DisplayPolynomial(Polynomial p)
{
    fo(i, 0, p.n)
    {
        if (p.p[i].e == 0)
        {
            cout << p.p[i].c;
        }
        else
        {
            cout << p.p[i].c << "x^" << p.p[i].e << " + ";
        }
    }
}
