// p12:
// 🎆
// link: https://www.hackerrank.com/challenges/classes-objects/problem 🎆
// visit this for copy-constructor: https://www.geeksforgeeks.org/copy-constructor-in-cpp/
#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

class Student
{
    int marksarr[5];

public:
    void input(void)
    {
        for (int i = 0; i < 5; i++)
        {
            // "type here to repeat"
            cin >> marksarr[i];
        };
    };
    int calculateTotalScore()
    {
        // write single-code for one time for one kind of task such as reversing-array-task , roatating-arry-task etc..
        return marksarr[0] + marksarr[1] + marksarr[2] + marksarr[3] + marksarr[4];
    };
};
main()
{
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score)
        {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
