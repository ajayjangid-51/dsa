#include <iostream>
using namespace std;

int main()
{
    while (1)
    {

        int amount, disp, nitems, deprice;
        cout << endl
             << "enter the number of items " << endl;
        cin >> nitems;
        cout << "enter the default-price of per peice " << endl;
        cin >> deprice;
        amount = (nitems * deprice);
        cout << "the bill-amout without discount " << amount << endl;
        cout << "enter the discout-percent ";
        cin >> disp;

        double a = ((amount / 100) * disp);
        double pam = (amount - a);
        cout << endl
             << "the amout to pay with discout is " << pam << endl;

        cout << "the price per item will be " << (pam / nitems) << endl;
    }
    return 0;
}