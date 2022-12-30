// p14:
// 🎆 link: https://www.hackerrank.com/challenges/rectangle-area/problem 🎆
// now ess problem meh apn rectangle ka area find-out krenge with the help of classes.
#include <iostream>
using namespace std;

class Rectangle
{

public:
    int w, h;
    void display()
    {
        cout << w << " " << h << endl;
    }
};
class RectangleArea : public Rectangle
{
public:
    void read_input()
    {
        cin >> w >> h;
    }
    void display()
    {
        // cout << w << " " << h << endl;
        cout << (w * h) << endl;
    }
};

int main()
{
    RectangleArea r_area;
    /*
     * Read the width and height
     */
    r_area.read_input();

    r_area.Rectangle::display(); //👿📓-note-point: as apn ess tarah bhi derived-class k parent-class k specific-fns ko call kr skteh hai. 👿📓

    r_area.display();

    return 0;
}
