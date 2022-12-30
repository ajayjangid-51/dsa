//🔥💲🍕 Okay Now aab apn "Polynomial-Evaluation" dekhenge mtlb "Polynomial" ki value Evaluate mtlb "Polynomial" ki value nikalana dekhenge... 🍕💲🔥

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
int EvaluePolynomial(Polynomial p, int x)
{
    int sum = 0;
    fo(i, 0, p.n)
    {
        sum += p.p[i].c * pow(x, p.p[i].e);
    }
    return sum;
}

void Create(Polynomial &p);
void DisplayPolynomial(Polynomial p);
int main()
{
    // int a = 2, b = 3;
    // cout << a**b << endl;
    //👿📔imp-Note-point:- c++ meh "exponent-operator" nhi hota hai, thus toh exponent find krne kiyeh apnko "pow"-function ka use krna hota hai.
    // cout << pow(a, b);

    Polynomial p;
    Create(p);
    DisplayPolynomial(p);
    deb(EvaluePolynomial(p, 1));

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