//🔥💲🍕 as toh YAHA pe apn "3-column-Representation" form ko implement krna dekhenge.. mtlb apn "3-column-Form-of-Spare-Matrix" ko create krna and phir Print krna dekhenge. 🍕💲🔥

// as apn "Representation-Form" ko physically hi toh jantehh hi hai, and NOw toh aab apn usko memory meh create krenge..
// thus toh sbse phle apn jantehh hi hai ki 3-column-representation meh apnko har element ki info store krni hai , thus toh apn mtlb ek structure bana lenge which will contain row(i) , column(j) and value(v) . and apn ek baat yeh bhi janteh hai ki 3-column-representation meh 1st mtlb 0th-index sparse-matrix ki info contain krti hai, thus toh apn kya krenge ki , apn eske liyeh bhi ek struct bana lenge jismeh no.of-rows , no.-of-columns and no.of-non-zeros-values contained hogi and phir ek Element-struct ko point krne wala pointer. as like this:

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

struct SparseElement
{
    int i;
    int j;
    int value;

    //🔔🔔 as yeh i, j and value voh all the cheeze hai jo ki sparse-matrix meh present element ko define krti hai. 🔔🔔
};

struct SparseMatrix
{
    int m;
    int n;
    int elements;
    SparseElement *p;
};

// And now aab apn Create-fn banayenge.. jo ki Sparse-Matrix ki "3-column-representation-Form" ko create karega.

void CreateSpareMatrix(SparseMatrix &m)
{
    //📔📔Note-point:- as yaha Function ka naam toh "CreateSparseMatrix" hai but yeh yaha SparseMatrix ko uski "Represenation-form" meh create karega.

    cout << "heelo Input the \"m\" and \"n\" value of your Sparse-Matrix " << endl;
    cin >> m.m >> m.n;
    m.elements = 0;
    // m.p = new SparseElement[10]; or we here instead of taking static-sized-array we can take dynamic-sized-Vector.
    // or instead of these we can request the user to input the no.-of-non-zeros-elements in sparse-Matrix and then simply creating the array-of-"Element" :-
    // as like this:-
    cout << "Enter the no.-of-non-zero-elements:-" << endl;
    cin >> m.elements;
    m.p = new SparseElement[m.elements];

    cout << "Okay now input your Sparse-Matrix" << endl;
    int a = 0;
    fo(i, 0, m.m)
    {
        fo(j, 0, m.n)
        {

            int e;
            cin >> e;
            if (e > 0)
            {
                m.p[a].i = i;
                m.p[a].j = j;
                m.p[a].value = e;
                a++;
            }
        }
    }
}

void PrintSparseMatrix(SparseMatrix m);

int main()
{

    SparseMatrix m;
    CreateSpareMatrix(m);
    PrintSparseMatrix(m);

    return 0;
}

void PrintSparseMatrix(SparseMatrix m)
{
    int k = 0;
    fo(i, 0, m.m)
    {
        fo(j, 0, m.n)
        {
            if (i == m.p[k].i && j == m.p[k].j)
            {
                cout << m.p[k].value << " ";
                k++;
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
    // fo(i, 0, m.elements)
    // {

    //     deb(m.p[i].i);
    //     deb(m.p[i].j);
    //     deb(m.p[i].value);
    // }
}

//📔📔Note-point:- "tuple" mtlb "structure" hi hota hai, as bas farak itna hai ki python meh "structure" ko "tuple" bolteh hai.