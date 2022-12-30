//🔥💲🍕  Okay toh now aab apn Sparse-Matrices ko add krna dekhenge...  🍕💲🔥
// as esseh toh apn ne "class-159" meh physically hi toh approach dekhli hai mtlb "logic" toh dekh liya of addind the "sparse-matrices" , thus toh now apn directly and simply "Code" implement krenge... mtlb "sparse-matrices" ko add krne wala "Function" likhenge..

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

SparseMatrix *Add(SparseMatrix &s1, SparseMatrix &s2)
{
    if (s1.m != s2.m && s1.n != s2.n)
    {
        cout << "Sorry Addition cannot be performed" << endl;
    }
    SparseMatrix *sum = new SparseMatrix;
    sum->m = s1.m;
    sum->n = s1.n;
    // sum.elements =;
    sum->p = new SparseElement[(s1.elements + s2.elements)];
    int x = 0, y = 0, z = 0;
    while (x < s1.elements && y < s2.elements)
    {
        if (s1.p[x].i < s2.p[y].i)
        {
            sum->p[z] = s1.p[x];
            z++, x++;
        }
        else if (s1.p[x].i > s2.p[y].i)
        {
            sum->p[z] = s2.p[y];
            y++, z++;
        }
        // else if (s1.p[x].i == s2.p[y].i)
        // or
        else
        {
            if (s1.p[x].j < s2.p[y].j)
            {
                sum->p[z] = s1.p[x];
                z++, x++;
            }
            else if (s1.p[x].j > s2.p[y].j)
            {
                sum->p[z] = s2.p[y];
                z++, y++;
            }
            else if (s1.p[x].j == s2.p[y].j)
            {
                // sum->p[z].i = s1.p[x].i;
                // sum->p[z].j = s1.p[x].j;
                // sum->p[z].value = s1.p[x].value + s2.p[y].value;
                // or we can do like this also:-
                sum->p[z] = s1.p[x];
                sum->p[z].value += s2.p[y].value;
                z++, x++, y++;
            }
        }
    }
    fo(i, x, s1.elements) sum->p[z++] = s1.p[i];
    fo(j, y, s2.elements) sum->p[z++] = s2.p[j];
    sum->elements = z;

    return sum;
}

void CreateSpareMatrix(SparseMatrix &m);
void PrintSparseMatrix(SparseMatrix m);
int main()
{
    SparseMatrix s1, s2;
    CreateSpareMatrix(s1);
    CreateSpareMatrix(s2);
    cout << endl;
    PrintSparseMatrix(s1);
    cout << endl;
    PrintSparseMatrix(s2);
    SparseMatrix *s3 = Add(s1, s2);
    cout << endl;
    PrintSparseMatrix(*s3);
    // deb(s3->p[0].i);
    // deb(s3->p[0].j);
    // deb(s3->p[0].value);
    // deb(s3->p[1].i);
    // deb(s3->p[1].j);
    // deb(s3->p[1].value);
    // deb(s3->p[2].i);
    // deb(s3->p[2].j);
    // deb(s3->p[2].value);
    // deb(s3->p[3].i);
    // deb(s3->p[3].j);
    // deb(s3->p[3].value);

    return 0;
}

void CreateSpareMatrix(SparseMatrix &m)
{
    cout << "heelo Input the \"m\" and \"n\" value of your Sparse-Matrix " << endl;
    cin >> m.m >> m.n;
    // m.elements = 0;
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
}
