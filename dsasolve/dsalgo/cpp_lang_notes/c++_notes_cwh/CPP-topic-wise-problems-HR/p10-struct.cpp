// p10:
// 🎆
// link: https://www.hackerrank.com/challenges/c-tutorial-struct/problem 🎆

#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int age;
    char first_name[51];
    // string first_name;  // as yeh ess question k according nhi kr skteh, as bcoz q ki apnko input-string pe limit lagani hai.
    char last_name[51];
    // string last_name;  //
    int standard;
    void fn(int p1)
    {
        cout << " all good " << 5 << endl;
    }
    // string to_string()
    // {
    //     // string stm = this->age "," << this->first_name << "," << this->last_name << "," << this->standard << endl;
    //     stringstream obj1("this, age");
    //     char a, b, c;
    //     obj1 >> a >> b >> c;
    //     obj1 << "goodi"
    //          << "superhai ji";
    //     cout << " the value of a , b and c is  " << a << b << c << endl;
    //     return obj1.str();
    // }
};
int main()
{
    // struct Student st;
    // st.fn(4);
    // cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    // cout
    //     << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard << endl;

    // st.to_string();
    // cout << " the string is ====== " << st.to_string() << endl;

    return 0;
}
