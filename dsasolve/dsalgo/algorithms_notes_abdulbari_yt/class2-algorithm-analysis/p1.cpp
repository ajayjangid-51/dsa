//

#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();
    // for (int i = 0; i < 10000; i++)
    // {
    //     // "type here to repeat"

    //     int a = i;
    //     a++;
    //     cout << " all good  " << i << endl;
    // };
    cout << 21 << endl;
    int a = 233;
    cin >> a;
    cout << " the value of inputed a is " << a << endl;

    // cout << "all" << 21 << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << "microseconds" << endl;
    // cout << " all good " << duration.count() << endl;

    return 0;
}

// as esseh toh coding kr skteh hai mtlb jaise apn apne khud k snippets codes bana skteh hai and unko phir use kr skteh hai , jaise apnko pata hai: int a = 21; krne se memory meh ek "a"-naam se ek node allocate ho jata hai and usmeh 21 fill ho jata hai, thus toh apna ek simple naam se ek snippet bana leteh hai ess kaam ko krne k liyeh. as mtlb uss snippet se code toh yahi fetch hoga but apnko feel hota rhega ki apn kya kr rhe hai , as mtlb phir apnko yeh apne snippet se fetch hone wale code ko apnko dekhna hi nhi padega , as q ki apn janteh hai ki apn kya kr rhe hai and kya ho raha hai. , as mtlb apn esseh snippets bana skteh hai jo ki common-language hai, but bas voh snippet meh simply apni common-language ka code hota hai , jo ki fetch ho jata hai. and apn mainly apni "CPP" k hi snippets banyenge. as q ki apnko "CPP" ka master-blaster banna hai.
// As toh aab se apn apne regular-kaam k snippets banayenge and phir unko hi use krenge. as ess idea ko apn follow krteh hai then apni CPP-language python se bhi easy ho jayegi and apni CPP ek fast toh bani hi rahegi.

// as toh snippets bananen k liyeh gp to settings-gear-icon >> user-snippets.
// NOte-point: and keep installed "prettier(the best auto formatter)"
