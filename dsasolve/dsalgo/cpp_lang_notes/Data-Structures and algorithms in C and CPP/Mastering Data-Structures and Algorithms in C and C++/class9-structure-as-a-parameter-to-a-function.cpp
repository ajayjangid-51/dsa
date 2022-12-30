/* 🌟 As YAHA pe apn Structure-as-parameter and Structure-as-return-value of the function k bareh meh dekhenge: 🌟 */
#include <iostream>
using namespace std;

struct student
{
    int st_rollno;
    string name;
    long phno;
    int st_height;
    int st_width;
};

/* 🌟 call by value 🌟 */
int fn_v(struct student p1)
{
    return p1.st_width * p1.st_height;
}
// or apn directly esseh bhi kr skteh hai only in sirf C++ , bcoz yeh C++ meh allowed hai..
// void fn(student p1) // as esseh (mtlb call-by-value) se toh actual-structure meh changement nhi hoga..

/* 🌟 call by address 🌟 */
void fn_a(student *p1) // as esseh (mtlb call-by-address) se apn actual-structure meh changemenent kr payenge..
//void fn(student &p1) // as esseh (mtlb call-by-refrence) is same as call-by-address. mtlb apn actual-structure meh changemenent kr payenge..
{
    (*p1).name = "aju kumar";
    // or
    p1->name = "aju kumar";
    (*p1).phno = 78779457;
    (*p1).st_rollno = 057;
}

/* 🌟 function returning a structure: 🌟 */
// student *fnn()
void fnzz()
{
    struct sti
    {
        int rollno;
        int marks[5];
    };
}
int a = 10;
// void *fnn() // as agr apn ess function k andar koi structure bananke phir return krteh hai then toh vaha pe apnko yeh kaam krna hoga..
student *fnn2()
{
    // struct car
    // {
    //     int car_no;
    //     string car_model;
    //     string car_color;
    // } car1;
    // car *ptr = new car;

    //📓-note-point: or as we can use that global-space meh student-structure , as mtlb apn kisi function meh koi dusri bahar wale sirf global-space k variable-container and defination or template use kr skteh hai , q ki global-variable toh global-memory meh hamesa throughout the program toh exists krteh hi hai and baki voh template-defination ka toh memory-meh-existence se koi mtlb nhi hai. as toh mostly apnko defination or templates global-scope meh hi define krni chahiyeh..
    cout << " the value of a is  " << a << endl;
    // struct sti p1 = {32, {3, 5, 6, 3, 4}}; as toh mtlb apn sirf-or-sirf global-scope k variables or defination ko access kr skteh hai, apne kisi bhi function meh.

    student *ptr;
    ptr = new student;
    return ptr;
}

struct students
{
    int rollno;
    int marks[5];
};
void fn1(students p1);

int main()
{
    student st1; // as mtlb st1-naam se ek student-container allocate ho gaya hai.. as toh yeh pe datatype-speicfier ka use only alloctioning-memmory ko specify krne k liyeh hi use hota hai. mtlb compiler yeh pata chal jayeh ki konsa , kaise type ka memory-part or memory-structure allocate krna hai.

    st1.name = "ajay bhai";
    st1 = {057, "ajay jangid", 78779457, 10, 15};
    cout << " the area of st1-student is " << fn_v(st1) << endl;
    // as mtlb ess st1 k member function-parameter-structure meh assign hojaynege..
    cout << " the value of st1.name is  " << st1.name << endl;

    /* 🌟 call by address 🌟 */
    fn_a(&st1);
    cout << " the value of st1.name is  " << st1.name << endl;

    // as array is only called by call-by-address
    // and others like structure , union etc can be called-by-value or called-by-reference , or called-by-address...
    //📓-note-point: structure having array-inside can by called-by-value , with out any hestiation .

    /* 🌟 structure having a array inside init:: 🌟 */

    students ajay, ayan;

    fn1(ajay);
    //👿📓-note-point: as yaha pe apnne ajay-structure pass kiya hai toh mtlb function-run hone pe yeh student-structure create and allocate hoga and automatically usmeh ess ajay-student-structure k nodes ki values exactly function-scope meh crated strucutre k repective nodes meh automatically compiler k duvra assign kr di jati hai.  👿📓
    cout << " the value of ajay.rollno is " << ajay.rollno << endl;

    //🎆 some more-implementation:
    //🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗
    //📓-note-point: group of nodes ko apn simply object bol skteh hai.. and bolteh hi hai.
    // st1 = {057, "ajay jangid", 78779457, 10, 15};
    printf("the height is %d \n width is %d \n", st1.st_height, st1.st_width);

    student *stu_ajay = fnn2();
    cout << stu_ajay->st_height << endl;
    cout << stu_ajay->st_width << endl;

    return 0;
};
void fn1(students p1)
{
    p1.rollno = 57;
    // p1.marks = {20, 22, 18, 19, 22};
    //📓-note-point: as apn esseh ek saat ki structure k array ko initialize nhi kr sktehhh...
    p1.marks[0] = 11;
    p1.marks[1] = 13;
    p1.marks[2] = 15;
    p1.marks[3] = 17;
    p1.marks[4] = 19;
    cout << " the value of ajay.rollno is " << p1.rollno << endl;
    cout << " the value of ajay.marks[0] is " << p1.marks[0] << endl;
    cout << " the value of ajay.marks[1] is " << p1.marks[1] << endl;
    cout << " the value of ajay.marks[2] is " << p1.marks[2] << endl;
    cout << " the value of ajay.marks[3] is " << p1.marks[3] << endl;
    cout << " the value of ajay.marks[4] is " << p1.marks[4] << endl;
};