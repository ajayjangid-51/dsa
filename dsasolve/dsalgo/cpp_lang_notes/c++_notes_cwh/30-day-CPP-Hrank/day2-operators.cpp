// day2:
// problem-Link: https://www.hackerrank.com/challenges/30-operators/problem?h_r=next-challenge&h_v=zen

#include <iostream>
using namespace std;
void fn(double p1_mealcost, int p2_tippercent, int p3_taxpercent)
{
    double tipadd = p1_mealcost * (double(p2_tippercent) / 100);
    double taxadd = p1_mealcost * (double(p3_taxpercent) / 100);
    // cout << int(p1_mealcost + tipadd + taxadd) << endl;
    cout << " the tipadd is " << tipadd << endl;
    cout << " the taxadd is " << taxadd << endl;
    cout << int(5.98) << endl;
};
int main()
{
    double meal_cost;
    // cin >> fixed >> setprecision(2) >> meal_cost; // wrong-syntax..
    cin >> meal_cost;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');

    fn(meal_cost, tip_percent, tax_percent);

    return 0;
}
//