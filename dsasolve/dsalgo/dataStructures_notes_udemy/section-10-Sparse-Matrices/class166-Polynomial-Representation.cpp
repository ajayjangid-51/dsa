//🔥💲🍕 "POLYNOMIAL" 🍕💲🔥
//💲🍕 As toh mtlb apn "Polynomial" ko apne Program mtlb "memory" meh Represent krna dekhhenge.. thus taki phir apn ess "Polynomial" pe apni working kr payehh. 🍕💲

// As toh polynomial hota kya..hai??
// AS programmtically apn Polynomial ko ess tarah define krtehh hai:- Polynomial is a collection of terms where each terms has a coefficient and exopnent of a "variable"

// Univariate-polynomial mtlb polynomial-which-having-only 1-variable.
// As toh yaha pe apn polynomial ko represent krna mtlb memory-meh represent krna dekhenge and then phir uss polynomial ka evaluation krna dekhenege and jab apne pass multiple polynomial ho then unka addition , subtraction , multiply etc..etc krna dekhenge...

// As toh yeh topic sparse-matrices se pura alg hai... As voh matrices k bareh meh tha and yeh toh polynomial k bareh meh hai.. as yaha apn yeh dekhenge ki jab apne pass physically koi polynomial ho toh usseh apn Programming meh kaise handle kr sktehh hai...
// Thus toh mtlb overall apn "polynomial" ko handle krna hi dekhege in Programming ki terms meh..

// Okay toh "Defination" k according  mtlb apn ek list or mtlb array of container le sktehh hai where container meh 2-cheeze aati hai, first is "exponent" and other is "coefficient".
// As like this:- 🖼️🖼️🖼️  see pic-1 :- 🖼️🖼️🖼️

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
    // Term *p;
    // notepoint if pointer points to an array then make its name as a "plural".
};

void Create(Polynomial &p)
{
    cout << "enter the number of terms in your Polynomial" << endl;
    cin >> p.n;
    p.p = new Term[p.n];
    cout << "Okay now enter your Polynomial by just mentioning only coefficient and Exponent term-by-term" << endl;
    fo(i, 0, p.n)
    {
        cout << "Term-no. " << i + 1 << endl;
        cin >> p.p[i].c >> p.p[i].e;
    }
    cout << endl;
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
int main()
{
    Polynomial p;
    Create(p);
    DisplayPolynomial(p);

    return 0;
}