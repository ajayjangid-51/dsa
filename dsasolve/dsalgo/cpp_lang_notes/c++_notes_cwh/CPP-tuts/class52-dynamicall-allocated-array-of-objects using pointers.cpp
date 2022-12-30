// YAHA pe apn dynamically "Heap"-memory meh array-of-Objecst allocate krna dekhenge.
// AS apn C++ programming meh dynamically-allocation in Heap Pointers , new and delete operator ki madad se krteh hai. as C language meh apn yeh kaam calloc and malloc-fn se kiya krteh thee.

// array of pointers kuch nhi hota , as array of objects hota hai making by the help of pointers.

#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setdata(int p1, float p2);
    void getdata(void)
    {
        cout << "the id of this item is " << id << endl;
        cout << "the price of this item is " << price << endl;
    }
};
void Shop::setdata(int p1, float p2)
{
    id = p1, price = p2;
};
int main()
{
    Shop *ptrar = new Shop[10];
    ptrar->setdata(32322, 100);
    (ptrar + 1)->setdata(32365, 122);
    ptrar->getdata();
    (ptrar + 1)->getdata();
    for (int i = 0; i < 10; i++)
    {
        (ptrar + i)->setdata((i + 5), ((100 * i) + 21));
    }
    for (int i = 0; i < 10; i++)
    {
        (ptrar + i)->getdata();
        cout << endl;
    }

    return 0;
}