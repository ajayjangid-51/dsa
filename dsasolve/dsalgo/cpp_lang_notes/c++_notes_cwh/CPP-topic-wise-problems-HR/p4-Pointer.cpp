// p4::
/* AS pointers ka most use function se formal-parameters ki value change krne k liyeh hota hai. as simply boleh toh pointer point krta hai ek memory-part ko .

Complete the update function in the editor below.

update has the following parameters:

int *a: an integer
int *b: an integer

visit: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?h_r=next-challenge&h_v=zen
*/

#include <iostream>
using namespace std;

void update(int *p1, int *p2)
{
    int temp = *(p1);
    *(p1) = *(p1) + *(p2);
    if (temp > *(p2))
    {

        *(p2) = temp - *(p2);
    }
    else
    {
        *(p2) = -(temp - *(p2));
    }
}

// algo2:
/*
void update(int *a,int *b) {
    int sum = *a + *b;
    int absDifference = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = sum;
    *b = absDifference; 
}
*/
// algo3:
/*
#include <stdlib.h>

void update(int *a,int *b) {   
    *a = *a + *b;
    *b =abs(*a - *b -*b);  // as abs()-fn apnko modulus-value mtlb absolute-value or round-off value deta hai.
}
*/
int main()
{
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    cout << "the a is a+b is " << a << endl;
    cout << "the b is |a-b| is " << b << endl;

    return 0;
}