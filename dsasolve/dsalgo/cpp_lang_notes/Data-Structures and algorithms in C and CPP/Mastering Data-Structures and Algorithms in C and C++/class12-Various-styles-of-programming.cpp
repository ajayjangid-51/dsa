/* 🌟 As NOw YAHA pe apn programming(mtlb idea after coding) krne k various tarike , various styles dekhengee: 🌟 */

// 🎆1. Monolithic-programming: (ess tarike of programming meh apn simply phle diff-diff tasks k liyeh functions banateh hai and then unn sabko accordingly main()fn meh call kr leteh hai.. and as toh ess tarah se coding krne ko Monothic-coding or Monolithic-programming krna khteh hai as programming essliy bol rahe hai q ki yaha pe thoda apna idea and logic bhi hai with saat-saat of coding..) 🎆
// programm to find perimeter and area of rectangle, where taking length and breadth from the user..
/*
#include <iostream>
using namespace std;

int main()
{
    int length = 0 , breadth = 0
    cin >> length >> breadth;
     // 🍹Tip-point: As hamesa apnko apne declared-nodes ko intialize kr dena chahiyeh with its realted-value or just by zero(0) . as bcoz yeh kafi sahi practice hai. and yeh recommended bhi hai ki hamesa intialize the variables either by its-related-value or just simply by zer0 , as q ki phir baad meh apnko pata rahega ki esko value zer0 hai toh mtlb eska apnne syand eski related-value se intialize nhi kiya hoga..

    cout << " the area of rectangle-r1 is " << length * breadth << " m^2" << endl;
    cout << " the perimeter of rectangle-r1 is  " << 2 * (length + breadth) << " m" << endl;

    //👿📓-note-point: As toh ess style meh , ess tarike se programming krne ko Monolithic-programming krna khteh hai.. mtlb in Monolithic-programming meh everything is written in main()-fn without any use of 
    structures and functions- 👿📓

    return 0;
}
* /


// 🎆2. Modular or Procedural-programming: (ess tarike of programming meh apn simply phle diff-diff tasks k liyeh functions banateh hai and then unn sabko accordingly main()fn meh call kr leteh hai.. and as toh ess tarah se coding krne ko Modular-coding or Modular-programming krna khteh hai as programming essliy bol rahe hai q ki yaha pe thoda apna idea and logic bhi hai with saat-saat of coding..) 🎆
// programm to find perimeter and area of rectangle, where taking length and breadth from the user..
/*
#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int area(Rectangle p1)
{
    return p1.length * p1.breadth;
}
int perimeter(Rectangle p1)
{
    return 2 * (p1.length + p1.breadth);
}
void display(Rectangle p1)
{
    cout << " the area of rectangle-r1 is " << area(p1) << " m^2" << endl;
    cout << " the perimeter of rectangle-r1 is  " << perimeter(p1) << " m" << endl;
}
int main()
{
    // Rectangle r1 = {2, 5};
    Rectangle r1;
    cin >> r1.length >> r1.breadth;
    // cout << " the area of rectangle-r1 is " << area(r1) << " m^2" << endl;
    // cout << " the perimeter of rectangle-r1 is  " << perimeter(r1) << " m" << endl;
    display(r1);

    //👿📓-note-point: As toh ess style meh , ess tarike se programming krne ko Modular-programming or Procedural-Programming krna khteh hai.. 👿📓
    
    📓note-point: as toh modular-programming se apna code easy-managable , readable and easy-debugging banta hai..

    return 0;
}

    
*/
// 🎆3. Structure-oriented-program or Structure-Oreinted-programming: 🎆
// as apn Structure meh data-members and unn data-members realated-functions embed kr skteh hai... but bas itna hai ki Structural-programming class-or-Object-oreinted-Programming jitni acchi nhi hai, as q ki class meh private , protected , public , constructor and etc..etc...jaise features bhi hoteh hai.. and jaise inheritance , polymorphism etc..etc.. jaise features hoteh hai...
#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }
    //👿📓very-imp-note-point: As yeh area()-fn , perimeter()-fn and etc.. kuch bhi jo ess datas mtlb sirf length and breath se related hai unko apn ek jagah hi combine kr skteh hai.. mtlb Structure meh hi combine kr skteh hai, as esseh krne se apni code krna easy and smooth and fast ho jata hai...  👿📓
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void display()
    {
        cout << " the area of rectangle is  " << area() << endl;
        cout << " the perimeter of rectangle is " << perimeter() << endl;
    }
    void init(int p1, int p2)
    {
        length = p1;
        breadth = p2;
    }
};
int main()
{
    Rectangle r1 = {0.0};
    int l, b;
    cin >> l >> b;
    r1.init(l, b);
    cout << " Using Structural-programming:: " << endl;
    // cout << " the area of rectangle-r1 is  " << r1.area() << endl;
    // cout << " the perimeter of rectangel-r1 is  " << r1.perimeter() << endl;
    r1.display();

    //👿📓-note-point: As toh yeh style or yeh tarika of programming is know as Structure-oriented-programming mtlb apnne simply memory-meh ek Structure-allocate kr diya and phir uss Structure meh jo present datas and functions ko as per need use kr liya hai..  and as yeh tarika of programming krne ka kafi sahi hai , mtlb fast hai , readable , scalable hai and mtlb managable hai.. toh aab se aaj k baad meh apn essehi mtlb object-oriented-programming krengee.. q ki yahi sbse best hai and mastam haii.. but Class-oriented-programming orr bhi acchi and mastam hai..👿📓
    // 📓note-point:as yeh Structural-programming bhi object-oriented-programming hai but mtlb ekdam-fuly fleaged programming nhi hai... as voh phir class se hoti hai..
    return 0;
}
// 🎆4. Object-oriented-Program or Object-Oriented-Programming: 🎆
/*
    
#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void display()
    {
        cout << " the area of rectangle is  " << area() << endl;
        cout << " the perimeter of rectangle is " << perimeter() << endl;
    }
    Rectangle(int p1, int p2)
    {
        length = p1;
        breadth = p2;
    }
};
int main()
{
    int l, b;
    cin >> l >> b;
    Rectangle r1(l, b);
    // cout << " the area of rectangle-r1 is  " << r1.area() << endl;
    // cout << " the perimeter of rectangel-r1 is  " << r1.perimeter() << endl;
    r1.display();

    //👿📓-note-point: As toh yeh style or yeh tarika of programming is know as Object-oriented-programming mtlb apnne simply memory-meh ek object-allocate kr diya and phir uss object meh jo present datas and functions ko as per need use kr liya hai..  and as yeh tarika of programming krne ka kafi sahi hai , mtlb fast hai , readable , scalable hai and mtlb managable hai.. toh aab se aaj k baad meh apn essehi mtlb object-oriented-programming krengee.. q ki yahi sbse best hai and mastam haii..👿📓

    //  📓note-point: as toh Object-oreinted-programming se apna code orr bhi easy-managable , readable and easy-debuggable banta hai and easy-writtenable  , reuseable etc..etc many more faydee hai in comparison to Modular and Monolithic-programming...
    return 0;
}
*/

//👿📓-note-point: AS yeh sab program ek hi hai mtlb enka kaam mtlb enka result ek hai but enka likhne ka tarika(mtlb style-of-programming and coding) alag and phir writing-style ki vajah se ess program ki working mtlb processing bhi alal-alag hoti hai.. 👿📓
// as toh ess course meh mostly modular-programming and or object-oriented-programming krenge::

// using functions is C-style-programming and using Class is Cpp-style-programming.. as apn ess course mostly and mainly functions hi likhenge for short programs and as class toh big-programms k liyeh use kiyeh jateh hai..