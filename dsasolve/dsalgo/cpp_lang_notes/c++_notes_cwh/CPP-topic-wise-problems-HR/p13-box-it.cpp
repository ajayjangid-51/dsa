// p13:
// 🎆
// link: https://www.hackerrank.com/challenges/box-it/problem?h_r=next-challenge&h_v=zen 🎆
// operator-overloading concept : https://www.geeksforgeeks.org/operator-overloading-c/

#include <iostream>
using namespace std;

class Box
{
    // int l, b, h; // 👿imp-notice-point: as apnko yaha constraint tha ki l,b , h < 10^5 , thus toh phir apnko enn l,b, h ko "long"-datatyep rkhna hoga and yeh choti si cheez bohat important bcoz ess choti si cheez se apna 1-test-wrong ho gaya. thus toh hamesa apnko problem k given constraints ko dekh lena hai phle hi.
    long l, b, h;

public:
    Box()
    {
        //l, b, h = 0; // as esseh toh sirf yeh "h" hi initialize huaa hai.
        l = 0, b = 0, h = 0;
    }

    //👿📓-note-point: "copy-constructor" mtlb voh constructor voh apni khud ki class ko hi as a input leta hai 👿📓
    Box(long length, long breadth, long height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    Box(Box &B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }
    long getLength()
    {
        // write single-code for one time for one kind of task such as reversing-array-task , roatating-arry-task etc..
        return this->l;
    };
    long getBreadth()
    {
        // write single-code for one time for one kind of task such as reversing-array-task , roatating-arry-task etc..
        return this->b;
    };
    long getHeight()
    {
        // write single-code for one time for one kind of task such as reversing-array-task , roatating-arry-task etc..
        return this->h;
    };
    long long CalculateVolume()
    {
        // return ((this->l) * (this->b) * (this->h));
        long long volume = l * b * h;
        return volume;
    }
    bool operator<(Box &pB)
    {
        if (l < pB.l)
        {
            return 1;
        }
        else if (b < pB.b && l == pB.l)
        {
            return 1;
        }
        else if (h < pB.h && b == pB.b && l == pB.l)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    };
    friend ostream &operator<<(ostream &output, Box &BB)
    {
        cout << " hello ji sab awesome hai ji " << endl;
        // cout << BB.l << " " << BB.b << " " << BB.h << endl;
        output << BB.l << " " << BB.b << " " << BB.h << endl;
        return output;
    }
};
void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}
int main()
{
    // Box obj1, obj2;
    // obj1 << obj2;
    // cout << obj2;
    check2();

    return 0;
}