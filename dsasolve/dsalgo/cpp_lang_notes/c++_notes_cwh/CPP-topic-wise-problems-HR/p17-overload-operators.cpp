// p17:overload-operators:
// 🎆 link: https://www.hackerrank.com/challenges/overload-operators/problem🎆
//Operator Overloading

#include <iostream>
using namespace std;
class Complex
{
public:
    int a, b;
    void input(string s)
    {
        int v1 = 0;
        int i = 0;
        while (s[i] != '+')
        {
            v1 = v1 * 10 + s[i] - '0';
            i++;
        }
        while (s[i] == ' ' || s[i] == '+' || s[i] == 'i')
        {
            i++;
        }
        int v2 = 0;
        while (i < s.length())
        {
            v2 = v2 * 10 + s[i] - '0';
            i++;
        }
        a = v1;
        b = v2;
    }
    Complex operator+(Complex c1)
    {
        Complex C;
        C.a = this->a + c1.a;
        C.b = this->b + c1.b;
        return C;
    }
    // ostream &operator<<(ostream &print, Complex &CC)
    friend ostream &operator<<(ostream &print, Complex &CC)
    // friend ostream &operator<<(ostream &output, Complex &CC)
    {
        // cout << "  " < < < < endl;
        print << CC.a << "+i" << CC.b;
        return print;
    }
};
//👿📓-note-point: orr ya apn ess tarah class k bahar bhi operator-functions define kr skteh hai. 👿📓
/*
Complex operator+(Complex c1 , Complex c2)
    {
        Complex C;
        C.a = c1.a + c2.a;
        C.b = c1.b + c2.b;
        return C;
    }
    // ostream &operator<<(ostream &print, Complex &CC)
    ostream &operator<<(ostream &print, Complex &CC)
    // friend ostream &operator<<(ostream &output, Complex &CC)
    {
        // cout << "  " < < < < endl;
        print << CC.a << "+i" << CC.b;
        return print;
    }*/

int main()
{
    Complex x, y;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    x.input(s1);
    y.input(s2);
    Complex z = x + y;
    cout << z << endl;
    return 0;
}