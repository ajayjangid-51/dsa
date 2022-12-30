/* 🌟 🔥 Analysis of Algorithm 🔥 🌟 */
// 🎆 As now YAHA pe apn Algorithm ko analyize krna dekhenge, as apn ya sablog Algorithm ko isliy Analyize krteh hai, takki yeh pata chal sake ki yeh algorithm kaisa hai mtlb yeh Algorithm user-friendly hai? , secure hai mtlb esmeh security-related func hai , maintainable hai ya nhi hai , speed kaisi hai and most importantly hai uski performance kaisi hai.. bcoz performance hai toh maja hai mtlb software ki performance mast hai toh usko chlane meh maja aata hai, and agr performance hai toh then apn software ko scale bhi kr skteh hai.. As performance acchi hai toh Software-program ko scale krna accha hai, otherwise toh koi mtlb nhi hai.. 🎆
//:  🍿now apn ek single Task k present  no. of-Algorithms ko compare krna dekhenge ki mtlb enn Algorithms meh se konsa Algorithm accha hai..🍿
// 👍🏻1: now apne pass ek simple , sidha tarika toh yeh hai ki apn unn dono Algorithms ko apne program meh diffrently files meh implement krke unka run-time calculate kr leteh hai.. and thus jiska run-time kaam hoga mtlb voh Algorithm accha hai , mast hai..  but ess naive-tarike of analyizing or comparing of Algorithm meh kafi problems hai jaise bohat sare algorithms size of input pe depend krteh hai ,mtlb diff-size of input pe voh diff time-leta hai. Toh thus ess approach meh yeh problem hai ki apn sirf ek-input k liyeh algos ko compare krke analize kr skteh hai , but sabhi input k liyeh nhi kr skteh as toh mtlb apnko sabhi inputs k liyeh Algorithms ko compare krna hai, analize krna hai..

// 🎆 Thus toh sabhi inputs k liyeh analize krne k liyeh apn phir yeh steps follow krteh hai:
// 🔥Note-point: as enn steps ko follow krke Algorithms ko analyize krne ko "Asympyotic Analysis" krna khteh hai. As mtlb ess idea ,ess method ka naam hai "Asympyotic method" for analyizing Algorithms..🔥
/*
// Step1:-

// As toh apn "Asymptotic analysis" krteh hai then apnko jo apne naive-tarike meh problems hoti thi voh esmeh nhi aatii. As q ki ess tarike meh apn input-size k according Algorithm ko analyize krteh hai naki exact-time-calculate krteh hai. 🎆
// Yeh (n) , (logn) yeh sab order of growth hai of time-period with increasing input-size..
// Mtlb yeh esseh hai:
// T = n, logn
//    Where T is y mtlb "T" is time on y-axis and n is "x" mtlb n is input - size on x - axis.

*/

// As apn lines of code ka execution time calculate kr skteh hai as using std std-namespace meh chrono-class of chrono library jo ki CPP-11 meh aayi thi.

// AS q ki har line-of-code mtlb koi statement or command ko run hone meh ek particular time lgta hai. as q ki har statement se according ya toh memory-allocatio hota hai , ya allocated-memory meh initialization hota hai , ya dono ek saat meh hoteh hai , ya phir cpu unn allocated memory-data ko access krta hai. thus toh enmeh meh mtlb memory-allocate krne meh , allocated-memory meh data initialize krne meh , cpu time leta hai. and yeh jo cpu time le raha hai , ess time apnko dekhna hai ki cpu kis kaam meh time jada or mtlb kitna leta hai , jaise memory-allocation k liyeh kitna time lgta hai , allocated- memory meh kitna time lgta hai. or jaise ek loop of one-cycle meh kitna time lgta hai ,etc.etc..

// 🔥 Visit this for more: https://www.geeksforgeeks.org/measure-execution-time-function-cpp/

#include <chrono>
#include <iostream>
using namespace std;

using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();
    // high_resolution_clock is a structure and its symbol is like this: ⚫-🔴
    int a = 32, b = 231, c = 31, d = 31;
    cout << a + b + c - d << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    // cout << duration.count() << " microseconds " << endl;
    cout << duration.count() << endl;

    return 0;
}

// Visit this for more: https://www.geeksforgeeks.org/measure-execution-time-function-cpp/
