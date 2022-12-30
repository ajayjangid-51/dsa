#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double mealCost;
    int tipPercent;
    int taxPercent;
    cin >> mealCost >> tipPercent >> taxPercent;
    double tip = mealCost * double(double(tipPercent) / 100);
    double tax = mealCost * double(double(taxPercent) / 100);
    cout << " the tip is " << tip << endl;
    cout << " the tax is " << tax << endl;
    double totalcost = mealCost + tip + tax;
    cout << round(totalcost) << endl;

    // cout < < < <
    // endl;
    return 0;
}