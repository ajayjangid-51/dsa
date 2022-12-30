// AS NOW YAHA pe apn Array ki "size" ko increase and decrease krna dekhenge..

// as apn janteh hai ki apn allocated-array ki size increase or decrease nhi kr skteh hai , as now ess baat ko sun kr apnko yeh ek baat aati hai ki apn increase kr skteh hai in this way ki apn simply jiase array's last-container ka address 304 hai toh apn 308 address-ka-container allocate kr denge toh mtlb size increase ho jayegi but but the most important baat yaha pe yeh hai ki "container-addresses" apne haat meh nhi hoteh voh compiler k haat meh bhi syad hi hoteh honge.. toh mtlb apn addresses k basis pe memory-allocation nhi kr sktehh mtlb container ka address bata kr uss address-ka-container allocate nhi kr sktehh, as q ki addressing compilation-time pe hoti hai toh mtlb esa kuch prediction krna voh koi mtlb wali baat nhi hai. and thus toh esiliy bolteh hai ki apn array(mtlb allocated-array) ki size change nhi kr sktehh ...

// as esseh toh apn array( already allocated array) ki size increase or decrease nhi kr sktehh, but apn esseh kr skteh hai ki ek badi size ka dusra array allocate krke usmeh phle wale array ki values copy-assign krde and phle wale array ko delete(or mtlb release) krdenge and uske pointing-pointer ko new array "q" se point krva denge mtlb p=q krdenge mtlb p-pointer meh q-meh-stored-address p meh assign krdenge and q=NUll se assign krdenge,and thus toh mtlb abb p-pointer new-bade-wale-array-ko-point-kr raha hai, thus toh mtlb common-lang meh boleh toh aab p-array ki size increase ho chuki hai. thus toh yahi ek "naive" tarika hai of incresing the size of the array. (as jab size-change ki baat ho toh mtlb voh array already allocated hai.)

// as upar wale idea ko apn ess tarah simply implement krdenge...
// Implementation-part:
#include<iostream>
using namespace std;

int main(){
    int* p;
    p = new int[5];
    p[0] = 0;
    p[1] = 10;
    p[2] = 20;
    p[3] = 30;
    p[4] = 40;
    for(int i =0; i < 5 ; i++)
        cout << p[i] << " ";
    // now for increasing the size of p-array (as actually meh "p" array nhi hai as yeh toh pointer hai, but actually array meh array-name asehh pointer hi hota hai thus toh allover apn esehh kabhi kabhi bol skteh hai..)
    int *q;
    q = new int[10];
    for(int i =0 ; i<5 ; i++)
        q[i] = p[i];
    delete []p;
    p = q;
    q = NULL;
    p[5] = 50;
    p[6] = 60;
    p[7] = 70;
    p[8] = 80;
    p[9] = 90;
    cout << endl;
    for(int i = 0; i < 10; i++)
        cout << p[i] << " ";


    return 0;
}
// as toh appnne array-size ko increase krna dekh liya, ki mtlb kaise kis tarah array-size ko increase krteh hai, and aage jab bhi apnkok jarurat padegi for incrasing the size of the array then apn yahi hi tarika use krenge for incresing the size of the array.

// now aage apn 2D-array k bareh meh dekhenge.....