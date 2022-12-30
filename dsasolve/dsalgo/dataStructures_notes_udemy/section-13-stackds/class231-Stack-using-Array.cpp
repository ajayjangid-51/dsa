//🔥💲🍕 Implementing Stack using "Array-cotainer-space" 🍕💲🔥
// as we know that array and  linked-list are simple containers but stack , queue or containers-with-some-properties for inserting and removing(or mtlb deleting).
// as imp-baat ki "Stack is a fixed-sized-Container"
// and it is container in which insertion and deletion are done by following LIFO-discipline.
#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *arr;
    // int length; // as top and length ek hi hai.
};

void CreateStack(Stack &stk)
{
    cout << "Input the size of the stack" << endl;
    cin >> stk.size;
    stk.arr = new int[stk.size];
    stk.top = -1;
    // stk.length = 0;
}

//💲🍕 1.Push-Operation 🍕💲
void Push(Stack &stk, int element)
{
    // first-of-all checking that whether stack is full or not ,as if it is full mtlb we cannot insert element in it(stack) and if it not full mtlb then we can insert init.
    if (stk.top != (stk.size - 1))
    {
        stk.top++;
        stk.arr[stk.top] = element;
        // stk.length++;
    }
    else
        cout << "Sorry this may lead to Stack-overflow means stack is full so your element " << element << " cannot be inserted" << endl;
}

//💲🍕 2.PoP-Operation mtlb (deleting-Operation and stack meh toh deleting-Operation from the top hi hota hai) 🍕💲
int Pop(Stack &stk)
{
    // as first-of-all apn check krenge ki stack kahi empty toh nahi hai, mtlb agr empty hoga toh phir toh apn kya hi delete krenge..
    if (stk.top > -1)
    {
        stk.top--;
        return stk.arr[stk.top + 1];
    }
    else
    {
        cout << "Sorry StackUnderflow mtlb the Stack is already empty so nothing to be there for delete" << endl;
        return -1;
    }
}
//👿📔imp-Note-point:-time-taken by Push and Pop-operation is of O(1) means it is constant-time.

//💲🍕 3.Peek-Operation ( as yeh Peek-Operation stack-container ka kafi important and main-operation hai. AND Peek-operation hai ki particular-index wale element ko peek-krna mtlb uss particular-element ko uthana. as like jaise apne-pass chini-k-boriyo ka stack hai , toh uss stack meh 3-bori ko peek krna mtlb uss 3rd-bori ko uthana or mtlb nikalna and yeh kaam apn kaise krenge ki apn sbse phle sbse upar-wale-bori ko remove krenge , phir uske-niche-wali ko then uske niche-wali ko upto voh requested-3rd-bori ko nikalne tk apn voh kaam krenge...) 🍕💲

//🍕🍕 as LIFO-condition ko follow krna mtlb jo bhi, kuch bhi kaam hove ya apn kare voh ess LIfO-condition k basis pe hi hona chahiyeh.. thus toh mtlb apnko har-kaam krne pe apnko ess condition ka dhyn rkhna hoga ki apn yeh kaam ess condition ko follow-krteh huyeh hi kr rahe hai na. thus toh mtlb ess baat ko easy krne k liyeh apnko esseh samajna hai ki one-sided-Open-cylinder or box pe apn jo bhi kaam krtehh hai voh sab ess LIFO-condition ko follow krtehh hi hai. as esa kaam koi nhi hota hai jo bina LIFO-condition k bina hojayeh enn one-sided-open-boxes pe,bas condition yeh hai ki apn jo bhi insert kr rahe hai voh ek-dam box-k-fit-size ki ho. 🍕🍕
// and esseh same baat "queue" -k-liyeh hogi. ki vaha apnko har FIFO-condition k leteh huee krna hai, and hollow-pipe or hollow-box pe apn jo bhi kaam krtehh hai voh sab by-nature FIFO-condition ko follow hoteh huyehh hi hoteh hai.

// AS Peek-function inputed-position pe koi element hai ya nhi check krne k liyeh hota hai and element agr hai then voh kya hai , yeh dekhne k liyeh hota hai, as peek-function ki return-value -1 hone ka mtlb hai ki esi koi position stack meh hai hi nhi.
int Peek(Stack stk, int position)
{
    int peekvalue = -1;
    int index = stk.top - position + 1;
    if (index > -1 && index <= stk.top)
    {
        peekvalue = stk.arr[index];
    }
    else
    {
        cout << "Sorry your inputed-position is invalid " << endl;
    }
    return peekvalue;
}

// int Peek(Stack &stk, int index)
int Pick(Stack &stk, int position)
{
    // and as in Stack position mtlb it stack meh top-element ki position-1 hoti and second-top-element ki position-2 hoti hai and soo.on.
    // and positions of elements in the stack can be calculated as...
    // top-position + 1 = index
    // toh apn simpy poisition ko index meh convert krlenge.. and phir aage apna kaam krlene.. as simple as this.
    int index = (stk.top - position) + 1;
    if (index > -1 && index < stk.top)
    {
        while (stk.top >= index)
        {
            stk.top--;
        }
        return stk.arr[stk.top + 1];
    }
    else
    {
        cout << "sorry inputed-position is invalid" << endl;
        return -1;
    }
}

//💲🍕 4.StackTop-operation (as yeh operation se apnko stack meh Top-element ka pata chal jata hai) 🍕💲
int StackTop(Stack stk)
{
    if (stk.top == -1)
    {
        return -1;
    }
    else
        return stk.arr[stk.top];
}
//💲🍕 5.isEmpty-operation (as yeh operation apnko stack-empty hai ya nhi k bareh meh batata hai) 🍕💲
bool isEmpty(Stack stk)
{
    if (stk.top == -1)
    {
        cout << "Yes Stack is Empty " << endl;
        return 1;
    }

    cout << "NO Stack is not Empty" << endl;
    return 0;
}
//💲🍕 6.isFull-operation (as yeh operation apnko stack-full hai ya nhi k bareh meh batata hai) 🍕💲
bool isFull(Stack stk)
{
    if (stk.top == stk.size - 1)
    {
        cout << "Stack is Full" << endl;
        return 1;
    }
    else
    {
        cout << "Stack is not Full" << endl;
        return 0;
    }

    // or apn directly only yeh bhi likh sktehh hai...
    // return stk.top == stk.size - 1;
}

//👿📔imp-Note-point:- as toh yeh Stack k sare functions ki time-complexity O(1) hi hai mtlb sabhi function constant-time hi letehh hai.

void PrintStack(Stack stk)
{
    // as apn from the stack ko from the Top-consider krtehh hai toh stack ko apn usi way meh mtlb from the Top hi print-krenge...
    while (stk.top--)
    {
        cout << stk.arr[stk.top] << endl;
    }
}
int main()
{
    Stack stk;
    CreateStack(stk);

    // AS NOW aab apn Operations banayenge jisseh yeh container Stack-container lageyhh... as mtlb phir espe phir yeh operation hi ho payenge,.. toh that is why enn opeartions ki vajah se yeh container stack-container khalayega.

    //💲🍕 1.Push-Operation (as yeh operation stack meh element-insert krta hai as according to stack-rule. mtlb element from the top(mtlb open-side)-insert hoga. 🍕💲

    Push(stk, 21);
    Push(stk, 45);
    Push(stk, 15);
    Push(stk, 25);
    Push(stk, 25);
    PrintStack(stk);
    // cout << Pop(stk) << " is deleted " << endl;
    // cout << Pop(stk) << " is deleted " << endl;
    // cout << Pop(stk) << " is deleted " << endl;

    cout << endl
         << Peek(stk, 2) << " is peeked " << endl;
    cout << Peek(stk, 1) << endl;
    cout << Peek(stk, 2) << endl;
    cout << Peek(stk, 3) << endl;
    cout << StackTop(stk) << endl;
    cout << isEmpty(stk) << endl;
    cout << isFull(stk) << endl;
    return 0;
}

//👿📔imp-Note-point:-AS toh aab aage agr apnko kahi pe "Stack" chahiyeh then vaha apn simply yeh apna banaya huaa "Stack" use kr sktehh hai and mtlb esi ko hi krenge... as bas apnko datatypes change krne ki jarurat hogi, as ya phir apn ess Stack ko template-class meh likh denge. thus toh phir apnko dataypes change krne ki jarurat bhi nhi hogi, toh allover mtlb phir apna yeh "stack" kafi accha hojayega.
// and apn eska menu-driven-program bhi likhenge...

//📔📔Note-point:- Ohh.hooo apnne phle samja tha ki apn har recursion ko loop meh covert nhi kr skteh , but actually meh kr skteh and esko krne k liyeh apnko uss loop meh "stack" use krna hota hai..  for those recursion jisko apn loop meh convert nhi kr skteh...
// ADT meh data-representation( mtlb data-allocation-k ek suitable-virtaul form and uss "form" k liyeh space) and operation-on-data k Functions hoteh hai..
// As raw-ADT meh definations hoti hai of Function-operation on that memory-meh stored data..
