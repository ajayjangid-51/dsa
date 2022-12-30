#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define fo(i, start, end) for (int i = start; i < end; i++)

void Printvec(vi vec);
int main()
{
    //🔥💲🍕 2. Modifying-Sequencial-Functions:- ( as mtlb yeh functions bhi sirf array, sub-array pe hi kaam krtehh hai and unn array ko actual meh modify bhi kr deteeh hai.) 🍕💲🔥
    //💲🍕 1.copy()-fn 🍕💲
    vi source = {3, 5, 21, 45, 32, 10};
    vi v1(6);
    vi v2(10);

    copy(source.begin(), source.begin() + 3, v1.begin() + 2);
    Printvec(v1);
    Printvec(v2);

    //💲🍕 2.copy_n()-fn  🍕💲
    // as copy_n()-fn "copy()-fn" se accha function hai, as q ki second-agrument meh apnko only simply "number" mention krna hota hai ki apnko from the starting-point se kitne element copy krne hai. as simply like this:-
    copy_n(source.begin(), 5, v2.begin());
    Printvec(v2);

    //💲🍕 3.copy_if()-fn 🍕💲
    // as copy_if()-fn se apn kisi particular-condition k fullfill hone pe copy krva sktehh hai. mtlb coping pe apn condition-apply kr sktehh hai.
    vi v3(10);
    copy_if(source.begin(), source.end(), v3.begin() + 2, [](int i) { return i % 2 == 0; });
    cout << "the vec3 which contains only even number is ==== " << endl;
    Printvec(v3);

    //💲🍕 4.copy_back -fn 🍕💲
    vi v4(10);
    // using copy_backward() to copy 1st 4 elements..
    // ending at second last position..
    copy_backward(source.begin(), source.begin() + 4, v4.begin() + 2);
    cout << "the v4 is " << endl;
    Printvec(v4);

    //💲🍕 5.swap()-fn 🍕💲
    int aa = 10, bb = 20;
    cout << "before swap the a and b is " << aa << " " << bb << endl;
    swap(aa, bb);
    cout << "after swap the a and b is " << aa << " " << bb << endl;

    //💲🍕 6.sort()-fn 🍕💲
    cout << "the unsorted source array is" << endl;
    Printvec(source);
    sort(source.begin(), source.end());
    cout << "the sorted source array is" << endl;
    Printvec(source);
    //📔📔Note-point:- as apn orther conditions k basis pe bhi ess sort-fn se sorting kr sktehh hai.

    //💲🍕 7.max_element()-fn and min_element()-fn  and minmax()-fn and minmax_element()-fn 🍕💲
    cout << "the max element in the source array is " << *max_element(source.begin(), source.end()) << endl;
    cout << "the min element in the source array is " << *min_element(source.begin(), source.end()) << endl;
    pair<int, int> p2;
    // minmax()-fn ( as yeh function ek pair return krta hai.. toh mtlb apn phle ek pair-container banateh hai and phir uss pair-container meh store krenge...)
    p2 = minmax(10, 32);
    cout << "the p2.first is = " << p2.first << endl;
    cout << " the p2.first is = " << p2.second << endl;
    pair<int, int> p1;
    p1 = minmax({3, 10, 32});
    cout << "the p1.first is = " << p1.first << endl;
    cout << " the p2.first is = " << p1.second << endl;

    // minmax_element()
    // pair<auto, auto> p3;
    pair<vi::iterator, vi::iterator> p3;
    p3 = minmax_element(source.begin(), source.begin() + 4);
    cout << "the p3.first is = " << p3.first - source.begin() << endl;
    cout << " the p3.first is = " << source[p3.second - source.begin()] << endl;
    return 0;
}
void Printvec(vi vec)
{
    // fo(i, vec.begin(), vec.end()) cout << vec[i] << " ";
    int size = vec.size();
    fo(i, 0, size)
    {

        cout << vec[i] << " ";
    }
    cout << endl;
}