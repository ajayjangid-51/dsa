#include <bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(i, start, n) for (int i = start; i < n; i++)
// as preprocessor-statement meh baki sab same rheta hai, but bas jo arguments-hai unki value change(update) hoti and baki sab exactly same rhetaa hai.
#define debug(x) cout << #x << " = " << x << endl;
//📓📓 where yaha "#x" is for variable name. 📓📓 and ess "#" ka use apn sirf preprocessing-statements meh hi kr sktehh hai.
#define pb push_back
#define popb pop_back

typedef vector<int> vi;
int main()
{
    //📔📔Note-point:- okay..okay toh yaha for-loop preprocesor-defination k saat problem yeh thi ki jab apn for-loop preprocessor ka naam "for" hi rkh rhe toh , toh yeh apna c/c++ -formatter vaha "for" and "()"-parenthesis k bich meh space create kr de raha tha.. and preprocessor-statement meh voh "white-space" valid nhi hai. that is why apnko voh error mil raha hai, and yeh formatter vaha "white-space" for-loop k chackar meh kr raha tha.. thus thus why apnne phir "for" ki jagah "fo" ka use kiya hai and apni problem-issue solve hogaya.
    fo(j, 0, 10)
    {
        cout << "super super best" << endl;
    }
    int dego = 10;
    // dego++;
    // debug(10);
    // cout << #dego << " = " dego << endl;
    cout << "dego = " << dego << endl;
    debug(dego);

    return 0;
}