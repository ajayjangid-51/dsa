#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node
{
    // as yaha pe sbse se phle apnne ek container banaya hai...
    Node *next; // as now yeh next-pointer hai mltb yeh pointer Node-container ko point kr raha hai  ya hoga.
    Node *prev;
    int value;
    int key;

    // as mtlb yeh struct-container esa hai. mtlb memory meh apnko kuch ess tarah ka structure dikhega..

    /*
        ____ __ __ ____ 
       |____|__|__|____|    
        next va ke prev

 // and ess overall-container ka type hai Node-type or mtlb Node-datatype. and eska naam kuch bhi "xyz" ho skta hai.

    */

    //    and now yeh ess memory-structure pe dedicated-functions hai.jo ki ess container k data ko easily and directly access kr skteh hai, bcoz yeh dono same scope meh hai, mtlb structure-scope meh hai.
    Node(Node *p, Node *n, int k, int val) : prev(p), next(n), key(k), value(val){};
    Node(int k, int val) : prev(NULL), next(NULL), key(k), value(val){};
};

class Cache
{

protected:
    map<int, Node *> mp;            //map the key to the node in the linked list //as mtlb apnko
    int cp;                         //capacity
    Node *tail;                     // double linked list tail pointer
    Node *head;                     // double linked list head pointer
    virtual void set(int, int) = 0; //set function
    virtual int get(int) = 0;       //get function
};
class LRUCache : public Cache
{
    mp.insert(pair<int, Node *>(1, 10));

public:
    LRUCache(int cp)
    {
        this->cp = cp;
    }
    void set(int, int){

    };
    //👿📓imp-note-point: as Jab tk apn derived meh uski-abstract-base k virtual-functions ko re-define nhi krenge tab tk yeh derived-class bhi as a Abstract-class ki tarah hi behave karegi. as toh mtlb tab tk apn ess class-objects nhi bana payenge mtlb memory meh allocate nhi kr payenge.. 👿📓
    int get(int)
    {
    }
};

int main()
{
    int n, capacity, i;
    cin >> n >> capacity;
    LRUCache l(capacity);
    for (i = 0; i < n; i++)
    {
        string command;
        cin >> command;
        if (command == "get")
        {
            int key;
            cin >> key;
            cout << l.get(key) << endl;
        }
        else if (command == "set")
        {
            int key, value;
            cin >> key >> value;
            l.set(key, value);
        }
    }
    return 0;
}
