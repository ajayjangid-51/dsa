// 🔥 Dynamic-intialization of objects🔥
// AS YAHA pe apn Class-type-of-Data-Variables(mtlb Objects) ko Dynamically intialize mtlb dynamically memory enke k liyeh memory-strcture allocate krna dekhenge.
/*As mtlb apn YAHA pe class-objects ko dynamically initialize krenge mtlb program running-time pe class-variable-object-memory-structure memory meh allocate krna dekhenge mtlb compile-time pe hi apn memory-allocate nhi krenge as toh esseh toh jan program run hone k liyeh load hoga as tab hi voh memory-structure memory meh allocated rhega but apn run-time pe allocate krna dekhenge... As esseh krne se apna program jab memory meh load hota hai toh kaam memory-occupy krta hai and time-aane pe kuch orr memory occupy kr leta hai... Thus toh overall yeh ek mastam kaam hojayega.. ek apna program bina faltu meh memory- nhi leta...and program jitni kaam memory lega voh utna hi accha hoga usko smoothly run krne meh...

// as constructor-Overloading ki vajah se vaha sure nhi hota ki konsa constructor-fn call hone wala hai , thus toh phir voh baat run-time k liyeh chod di jati hai , thus mtlb constructor-fn toh runtime pe call hoga thus toh mtlb phir class-Object k memory-structure bhi run-time pe hi allocate hoga. thuss esseh apne program ki space-complexity toh save hoti hai , but time-complexity reduce hoti hai , mtlb time-taken increase ho jata hai. as esseh toh compilation k according run-time pe voh memory-structure already allocated rheta toh vaha voh time bach jata , but space ka issue ho jata , toh yeh decision phir apnko orr baki affecting-factors ko dekhteh huyehh decide krna hota hai.

And yeh kaam apn class-constructor ko run krke krteh hai q ki as apn janteh hi hai ki constructor-fn class-content ko intialize krke voh class-varobject return krta hai mtlb memory-allocate kr deta...

Thus toh now aab apn yeh dekhenge ki apn constructor-fn ko dynamically mtlb runtime pe kaise run kr skteh hai..m

And yeh kaam apn simply Constructor-overloading ki help se kr skteh hai.. q ki overloaded-fn by-default dynamically hi allocate hoteh hai.

Sare Functions toh stack meh dynamically-hi allocate hoteh hai... As variables nahi hoteh and objects bhi nhi hoteh but Objects ko toh apn unke-constructor-fn ki vajah se allocate kr skteh hai..

*/
// create a class which comprises the bank deposit and return-deposit-with-interest policy::
// With one-problem on bank-investment
#include <iostream>
using namespace std;

class BankDepositpolicy
{
    double principal_amount;
    double interestrate;
    //  interestrateinpercent;
    int return_amount;
    float timein_years;

public:
    BankDepositpolicy(double p1_pamount, int p2_rate, float p3_tyears)
    {
        principal_amount = p1_pamount, interestrate = double(p2_rate) / 100, timein_years = p3_tyears;
        return_amount = principal_amount;
        for (int i = 0; i < timein_years; i++)
        {

            return_amount = return_amount * (1 + interestrate);
        }
    }
    BankDepositpolicy(double p1_pamount, float p2_rate, float p3_tyears)
    {
        principal_amount = p1_pamount, interestrate = p2_rate, timein_years = p3_tyears;
        return_amount = principal_amount;
        for (int i = 0; i < timein_years; i++)
        {

            return_amount = return_amount * (1 + interestrate);
        }
    }
    void show()
    {
        cout << "your principle_despositing amount is " << principal_amount << " means your return amount after " << timein_years << " years at interest-rate " << interestrate << " will be " << return_amount << endl;
    }
};
int main()
{
    float rp;
    int rpp;
    float t;
    double p;
    cout << "enter the amount , rate and years" << endl;
    cin >> p >> rp >> t;
    BankDepositpolicy p1(p, rp, t);
    p1.show();

    cout << "input in percentage" << endl;
    cin >> p >> rpp >> t;
    BankDepositpolicy p2(p, rpp, t);
    p2.show();

    return 0;
}