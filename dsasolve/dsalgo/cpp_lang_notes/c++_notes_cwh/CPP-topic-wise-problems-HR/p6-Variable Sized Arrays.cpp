// p6:
/*
Consider an n-element array,a , where each index  i in the array contains a reference to an array of Ki  integers (where the value of Ki varies from array to array). See the Explanation section below for a diagram.
visit: https://www.hackerrank.com/challenges/variable-sized-arrays/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

or visit this for vector: http://www.cplusplus.com/reference/vector/vector/  // as yeh cplusplus-site ek acchi and documentation-level ki site hai , toh apn esko bhi refer kr skteh hai , but GfG bhi best hai.

// official solution: https://www.thepoorcoder.com/hackerrank-variable-sized-arrays-solution/
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    cout << endl;
    int a[n];
    // int arr[k];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int arr[a[i]];
        // for (int i = 0; i < a[i]; i++)
        for (int j = 0; i < a[j]; j++)
        {

            cin >> arr[j];
        }
        cout << endl;
    }
    int qr[q];
    for (int i = 0; i < q; i++)
    {
        // char str
        int qrr[qr[q]];
        for (int j = 0; j < 2; j++)
        {
            cin >> qrr[i];
        }
    }
    cout << "all goodd " << endl;
    // qrr[4];

    /* int a, b, c;
    cin >> a >> b;
    cout << endl; // as eska farak tab pdta hai apn apn har input k baad enter ka use krteh hai tab only otherwise agr apn continuously just putting one-space se krteh hai then vaha koi farak nhi pdta.
    cin >> c;     // or directly apn esseeh likh skteh hai.
    //cin >> a >> b >> c; // dono same hi hai mtlb koi new-line se input dena koi esa issue nhi hota hai.
    cout << a << b << c;
*/

    /*
    int a, b, c;
    cin >> a >> b;
    cout << endl;
    cin >> c;  // or directly apn esseeh likh skteh hai.
    cin >> a >> b >>c ; // dono same hi hai mtlb koi new-line se input dena koi esa issue nhi hota hai.



    //cin >> a >> b; // as bas cin , cout vs scanf , printf meh speed ka farak pdta hai orr esseh dono exactly same hi hai.
    // printf("%d \n", a);
    // scanf("%d %d", &a, &b);
    // printf("%d \n %d", a, b);
    */
    // int a = 11, b;
    return 0;
}