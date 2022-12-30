// day6:
// 🎆 link: https://www.hackerrank.com/challenges/30-review-loop/problem 🎆
// combining string with loops:
#include <iostream>
#include <string>
using namespace std;

void fn(string st)
{

    cout << st[0];
    for (int i = 1; i < st.size(); i++)
    {
        // "type here to repeat"
        if (i % 2 == 0)
        {
            cout << st[i];
        }
    };
}
void fn2(string st)
{
    for (int i = 1; i < st.size(); i++)
    {
        // "type here to repeat"
        if (i % 2 != 0)
        {
            cout << st[i];
        }
    }
}
int main()
{
    int T;
    cin >> T;
    string a[T];
    for (int i = 0; i < T; i++)
    {
        // "type here to repeat"
        cin >> a[i];
    };
    for (int i = 0; i < T; i++)
    {
        // "type here to repeat"
        fn(a[i]);
        cout << " ";
        fn2(a[i]);
        cout << endl;
    };

    return 0;
}

// Method-2:
/*int main() {
    int x;
    cin >> x;
    for(int i = 0; i < x; i++){
        string s;
        string s1, s2;
        cin >> s;
        for(int j=0; j < s.size(); j++){
            if(j%2==0){
                s1 += s[j];
            }else{
                s2+= s[j];
            }
        }
        cout << s1 << " " << s2 << endl;
    }
    return 0;
}*/