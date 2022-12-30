// p3:
/*
Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.

visit: https://www.hackerrank.com/challenges/c-tutorial-functions/problem
*/
#include <iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d)
{
    int max;

    if (a > b && a > c && a > d)
    {
        max = a;
    }
    else if (b > a && b > c && b > d)
    {
        max = b;
    }
    else if (c > a && c > b && c > d)
    {
        max = c;
    }
    else if (d > a && d > b && d > c)
    {
        max = d;
    }
    // note-point: AS agr kisi Problem meh dikaat aati hai toh bas uss problem-question and problem-solution k bareh meh sochteh rhena hai , hamesa.. din-raat jab tk uska solution na mil jayeh. 👍
    return max;

    // algo2: as yeh bhi mast solution hai:
    /*   return((a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d)) */
    return ((a > b ? a : b) > (c > d ? c : d) ? (a > b ? a : b) : (c > d ? c : d));

    // 🔔 After-solving problem visit "Discussion"-section look for more other different-algos , as esseh ek mast better understading banti hai ki code kaise-kaise kaam krta hai. as toh apnko pata hoga toh apn orr accha program likh payenge.

    // 👍algo3:
    /*
    int max_of_four(int a, int b, int c, int d){
    int ans;
    if (a > b && a > c && a > d)
        ans = a;
    else if (b > c && b > d)
        ans = b;
    else if (c > d)
        ans = c;
    else
        ans = d;
    return ans;
    }
    */

    // 👍algo4: by using library-functions:
    /*
    int max_of_two(int a, int b){
	return a > b ? a : b;
}

int max_of_four(int a, int b, int c, int d){
    return max_of_two(max_of_two(a,b), max_of_two(c,d));
}*/
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int fnreturn = max_of_four(a, b, c, d);
    cout << "the max value is " << fnreturn << endl;

    return 0;
}

/* raw-algo:

*/
