// p11:
// 🎆  classes meh yeh recommended hai ki apnko sabhi data-elements ko private hi rkhna chahiyeh.🎆
// link:    https://www.hackerrank.com/challenges/c-tutorial-class/problem?h_r=next-challenge&h_v=zen

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Student
{
    int age;
    // char first_name[51];
    string first_name;
    // char last_name[51];
    string last_name;
    int standard;

public:
    void set_age(int p1)
    {
        age = p1;
    };
    int get_age()
    {
        // write single-code for one time for one kind of task such as reversing-array-task , roatating-arry-task etc..
        return age;
    };
    void set_first_name(string parr)
    {
        first_name = parr;
    };
    string get_first_name()
    {
        return first_name;
    };
    void set_last_name(string parr)
    {
        last_name = parr;
    };
    string get_last_name()
    {
        return last_name;
    };
    void set_standard(int p1)
    {
        standard = p1;
    };
    int get_standard()
    {
        return standard;
    };
    string to_string()
    {
        // string stm = this->age "," << this->first_name << "," << this->last_name << "," << this->standard << endl;
        stringstream obj1("this, age");
        // char a, b, c;
        // obj1 >> a >> b >> c;
        obj1 << this->age << "," << this->first_name << "," << this->last_name << "," << this->standard;
        // cout << " the value of a , b and c is  " << a << b << c << endl;
        return obj1.str();
    }
};
int main()
{
    // Student st;

    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}