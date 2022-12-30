//🔥💲  💲🔥
#include <iostream>
using namespace std;

struct Array
{
    int *p;
    // now properties:-
    int size;
    int length;
};

// 4th:- Deleting-Operation:-
int Delete(Array *p1, int p2_index)
{

    // as Delete-operation krne k apne pass tarike mtlb 2-choices hoti hai , first ki apn container meh se sirf element-value ki delete kr deteh hai and container ko blank rhene deteh hai. and second-choice yeh hai ki apn koi blank-vlank nhi rkhteh hai as mtlb simply elements by 1-left shift kr deteh hai.
    // as now dono-choice meh hi kuch vulnerbility hai ki as agr apn first-choice krteh hai then vaha phir baad meh apnko har element check krna hoga ki element is empty or not-empty, as phir hi apn kuch aage kr payenge. and second-choice meh yeh hai ki agr yeh esseh krteh hai then vaha pe apn elements ko shift krna hoga, jismeh meh working toh hai hi. toh bas farak itna hai ki second-choice meh apn sara kaam phle haato-haat hi kr deteh hai jiski vagaj apna array bhi clean and clear mtlb confusion nhi rheta and first-choice meh apn as per need kaam krteh hai and vaha apnko khud ko bhi confusion rheta hai. thus toh overall apni second-choice sahi hai and apn yahi krteh hai.
    if (p2_index < 0 && p2_index > p1->length)
    {
        cout << "sorry this element is not even present so don't worry about it its already deleted by birth:" << endl;
        return 00;
    }
    else
    {
        int x = p1->p[p2_index];
        for (int i = p2_index; i < p1->length; i++)
        {
            p1->p[i] = p1->p[i + 1];
        }
        p1->p[p1->length - 1] = 0;
        p1->length--;
        return x;
    }
    // as ess function mtlb ess working ki bhi time-complexities same as it is insert-fn ki jaise hi hai.
}

int main()
{
    struct Array arr1;
    arr1.p = new int[5];
    arr1.p[0] = 1;
    arr1.p[1] = 3;
    arr1.p[2] = 5;
    arr1.p[3] = 6;
    arr1.p[4] = 8;
    arr1.length = 5;

    // as Deleting-operation mtlb array meh element delete hi kr dena, mtlb esseh array ki length decrease hogi as q ki element delete hi hogaya hai , as toh eske liyeh elements by one-element left-shifting kr denge..
    cout << "Enter the index which you wanted to be deleted" << endl;
    int mm;
    cin >> mm;
    Delete(&arr1, mm);
    Display(arr1);

    return 0;
}