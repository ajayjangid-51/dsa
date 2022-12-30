//
// given-sorted-array is : { 4 , 6, 21 , 65, 76, 183 , 202, 392, 443 }
#include <iostream>
using namespace std;

int binarysearchfn(int p1[], int p2, int p3)
// int binarysearchfn(int arr[], int X, int n) // as apnko parameters k esseh naam hi dene chahiyeh takki apnko function banateh time easily cheeze samaj meh and dhyn meh rheh.
{
    int half;
    for (int i = 0; i < p3; i++)
    {
        if ((p3 % 2) == 0)
        {

            half = (p3 / 2);
        }
        else
        {
            half = ((p3 / 2) + 1);
        }
        cout << half;
        // return xx;

        if (p2 > p1[half])
        {
            if ()
        }
        else
        {
        }
    }
};
int main()
{
    // given-sorted-array
    int sortarr[] = {4, 6, 21, 65, 76, 183, 202, 392, 443};
    int X = 202;
    int n = (sizeof(sortarr) / sizeof(int));
    int reseultinderx = binarysearchfn(sortarr, X, n);
    cout << "the index-no of X in the given-sorted-array is " << reseultinderx << endl;

    return 0;
}