//🔥💲🍕 Okay toh now aab apn simply "Sparse-Matrix"-class likhenge.. as q ki "class" or mtlb "template-class" hi important hai as it make easy to use the "sparse-matrix" in other-programms (and allover apnko yehi toh chahiyehh) 🍕💲🔥

//🌟🌟🌟 /👿📔imp-Note-point:- see the friend-function concept of "classes" , and "operator-overloading" and "istream" and "ostream" etc..etc.. to do better and clean coding.  🌟🌟🌟

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

class SparseElement
{
public:
    int i;
    int j;
    int value;
};
class SparseMatrix
{
private:
    int m;
    int n;
    int elements;
    SparseElement *p;

public:
    SparseMatrix(){};
    SparseMatrix(int m, int n, int elements);
    void Read(){};
    void Display();
    SparseMatrix *Add(SparseMatrix s2);
    ~SparseMatrix()
    {
        delete[] p;
    }
};
int main()
{
    SparseMatrix m1(4, 5, 5);
    m1.Display();
    SparseMatrix m2(4, 5, 4);
    SparseMatrix *sum = m1.Add(m2);
    sum->Display();

    return 0;
}

SparseMatrix::SparseMatrix(int m, int n, int elements)
{
    this->m = m;
    this->n = n;
    this->elements = elements;
    this->p = new SparseElement[elements];

    cout << "Okay now input your Sparse-Matrix" << endl;
    int a = 0;
    fo(i, 0, m)
    {
        fo(j, 0, n)
        {

            int e;
            cin >> e;
            if (e > 0)
            {
                p[a].i = i;
                p[a].j = j;
                p[a].value = e;
                a++;
            }
        }
    }
}

void SparseMatrix::Display()
{
    int k = 0;
    fo(i, 0, m)
    {
        fo(j, 0, n)
        {
            if (i == p[k].i && j == p[k].j)
            {
                cout << p[k].value << " ";
                k++;
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

SparseMatrix *SparseMatrix::Add(SparseMatrix s2)
{

    if (m != s2.m || n != s2.n)
    {
        cout << "Sorry Addition cannot be performed" << endl;
        // return NULL;
    }
    SparseMatrix *sum = new SparseMatrix();
    sum->m = s2.m;
    sum->n = s2.n;
    sum->elements = elements + s2.elements;

    sum->p = new SparseElement[(elements + s2.elements)];
    int x = 0, y = 0, z = 0;
    while (x < elements && y < s2.elements)
    {
        if (p[x].i < s2.p[y].i)
        {
            sum->p[z] = p[x];
            z++, x++;
        }
        else if (p[x].i > s2.p[y].i)
        {
            sum->p[z] = s2.p[y];
            y++, z++;
        }
        else
        {
            if (p[x].j < s2.p[y].j)
            {
                sum->p[z] = p[x];
                z++, x++;
            }
            else if (p[x].j > s2.p[y].j)
            {
                sum->p[z] = s2.p[y];
                z++, y++;
            }
            else if (p[x].j == s2.p[y].j)
            {

                sum->p[z] = p[x];
                sum->p[z].value += s2.p[y].value;
                z++, x++, y++;
            }
        }
    }
    fo(i, x, elements) sum->p[z++] = p[i];
    fo(j, y, s2.elements) sum->p[z++] = s2.p[j];
    sum->elements = z;

    return sum;
}

//🌟🌟🌟 /👿📔imp-Note-point:- see the friend-function concept of "classes" , and "operator-overloading" and "istream" and "ostream" etc..etc.. to do better and clean coding.  🌟🌟🌟