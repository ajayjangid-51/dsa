//🔥💲🍕 as Now aab apn simply C++ Class banyenge for the LinkedList, thus takki apn LinkedList ko ek-dam aaram se and acche se use kr skee 🍕💲🔥

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
class LinkedList
{
private:
    Node *first;

public:
    LinkedList()
    {
        first = NULL;
    }
    LinkedList(int arr[], int n);
    ~LinkedList(); // as ess function meh apn created-linkedlist ko delete krva denge , as mtlb jab linklist-class ka kisi function meh scope pura hojayega , as then yeh "Destructor"-function chalega and uss "heap"-meh-created linked list ko delete(mtlb vanish) kr dega.
    void display();
    int length();
    void insert(int pos, int value);
    int deletenode(int pos);

    // so now aab apn yeh sare functions aab implement krenge...
};
void LinkedList::display()
{
    Node *p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int main()
{

    return 0;
}