#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define SCD(t) scanf("%d", &t)
#define SCLD(t) scanf("%ld", &t)
#define SCLLD(t) scanf("%lld", &t)
#define SCC(t) scanf("%c", &t)
#define SCS(t) scanf("%s", t)
#define SCF(t) scanf("%f", &t)
#define SCLF(t) scanf("%lf", &t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define mp make_pair
#define pb push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi = acos(-1.0);
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
template <typename T, typename U>
inline void amin(T &x, U y)

{
    if (y < x)
        x = y;
}
template <typename T, typename U>
inline void amax(T &x, U y)
{
    if (x < y)
        x = y;
}
template <typename T>
inline void write(T x)
{
    int i = 20;
    char buf[21];
    buf[20] = '
'; do
    {
        buf[--i] = x % 10 + '0';
        x /= 10;
    }
    while (x)
        ;
    do
    {
        putchar(buf[i]);
} while (buf[i++] != '
');
}
template <typename T>
inline T readInt()
{
    T n = 0, s = 1;
    char p = getchar();
    if (p == '-')
        s = -1;
    while ((p < '0' || p > '9') && p != EOF && p != '-')
        p = getchar();
    if (p == '-')
        s = -1, p = getchar();
    while (p >= '0' && p <= '9')
    {
        n = (n << 3) + (n << 1) + (p - '0');
        p = getchar();
    }
    return n * s;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin)
#endif

        int tc;
    tc = read(int);
    while (tc--)
    {
        write(tc);
    }
    return 0;
}

// as implementation same deto as like physical-approach se hi hoti hai, but bas apnko chote-chote points ka dhyn rkhna hai ki apn actual meh pointedly kya kr rahe hai.. as toh phir apn easily apni physical-approach ko code kr sktehh hai. as jaise apn yeh wali baat yaha ess question ki physical apporach and implementation se samaj sktehh hai:- mtlb vapis dhyn kr sktehh hai yeh upar wali baat jo apnne boli hai, as q ki yeh baat apnne ess problem and many other problem ko solve krne k analysis-pr boli hai.
// https://practice.geeksforgeeks.org/problems/remove-duplicates3034/1/?category[]=Strings&category[]=Strings&problemStatus=unsolved&page=1&query=category[]StringsproblemStatusunsolvedpage1category[]Strings