// Now YAHA pe apn "Union" k bareh meh dekhenge:
// as Simply apn boleh toh Union bhi ek Container hi hota hai jismeh apn koi bhi ek datatype-value store kr skteh hai.
// and AS like Structure-continer yeh "Union" bhi User-defined Container hai. mtlb User hi ess Union-Container ko banata hai.
// and as Memory-k-terms meh Structure and Union define kre toh, mtlb as Structure jab banaya jata hai ,mtlb jab voh memory meh allocate hota hai then uske har element k liyeh diff-diff memory-parts indivally allocate hoti hai mtlb int k liyeh 4-bytes memory-part allocate hoga , char k liyeh alag 1-byte ka memory-part allocate hoga mtlb reserve hoga , and as like this Structure k sabhi members k liyeh respective memory-parts allocate honge. and  Union banane se Union k liyeh sirf ek hi memory-part allocate hota hai and uski size sbse-bade-member ki size k equal hoti hai. then phir uske declare hone k baad 

// THUS now apn Union banana , declare krna and Initialize krna dekhenge.
// note-point: Union and Strucuture ka syntax ek pura same hi hai but bas apnko Structure-keyword ki jagah Union-keyword ka use krna hota hai.
// 🔥 creating or defining structure: 🔥 
//🔥  now declaration of structure of created structure: 🔥         
//🔥  now Initializing the structure:🔥 
//      🎆   sabhi k liyeh bas  replace Strucute by Union   🎆

// note: apn Unions ka use krteh hai better memory management mtlb as Unions ka use krke ek tarike se apni memory manage ho rhi hai mtlb apne Program ka memory-consumption kaam ho rha hai mtlb manage ho rha hai. 


//  thus toh apn directly apn ese bol skteh hai ki Union voh container hai jismeh kisi bhi type ka data store kiya ja skta hai.

#include<stdio.h>
#include<string.h>
union student_info{
    int roll_no;
    char name[20];
    long phone_no;
};

int main()
{
    union student_info stu1 , stu2;
    // union student_info stu1 = { , "ookay" , 4838};  unions meh apn eseh ess tarah data ko store nhi kr skteh hai.

    stu1.roll_no = 21;
    strcpy(stu1.name , "harry");
    stu1.phone_no = 78779457;
    
    stu2.roll_no = 22;
    strcpy(stu2.name , "aju");
    stu2.phone_no = 98283234;

    printf("the stu1 roll_no is %d \n", stu1.roll_no);
    printf("the stu1 name is %s \n", stu1.name);
    printf("the stu1 phone_no is %d \n", stu1.phone_no);
    printf("the stu2 roll_no is %d \n", stu2.roll_no);
    printf("the stu2 name is %s \n", stu2.name);
    printf("the stu2 phone_no is %d \n", stu2.phone_no);

    // thus toh mtlb yeh Union hai thus toh esmeh apn sirf ek hi but koi sa bhi datatype store kr skteh hai.  
    
    return 0;
}


// Thus as per the favourable condition jismeh apnko ek time pe ek datatype hi store krna then vaha pe apn simply unions ka use krteh hai bcoz esa krne apni memory bachti hai apni memory save hoti thus mtlb jitna more-featurable and jitna chota apna program hoga utna hi apna program acche se chalega.....
// Thus toh esliy apn hamesa memory-saving pe dhyan denge utna hi accha hoga..thus esi concept k hisab se apn as per the favourable conditions pe Unions ka bhi use kr lete hai...or krna bhi chahiyeh..


// As union ka mtlb bhi unite mtlb abhi datatype k liyeh ek hi container,  mtlb union sbhi datatpyes ka union hai mtlb esmeh apn kuch bhi koi bhi datatype store kr skteh hai.. as int ki tarah nhi jismeh apn sirf interger hi Store kr skteh hai...

// Scope mtlb ek defined region.