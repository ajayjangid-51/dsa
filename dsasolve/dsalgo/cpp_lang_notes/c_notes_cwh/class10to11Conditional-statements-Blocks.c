// YAHA pe apn Conditional(ya Control) statements k bareh meh dekhenge:

// Conditional-Statement yani mtlb voh statement jinmeh koi condition lgi ho, and phir enn conditions ko Conditional-statement-controller-keyword se follow krvaya jata hai, and thus voh conditional-statement-controller-keyword apne ko follow krne wali condition ko check krta hai and phir agr voh true hoti hai toh work-box ka kaam hota hai and otherwise condition false huee toh work-box ka kaam nhi hoga and simply uske aagi wali codes-lines run hone lg jayegi


// now ALL Programming-languages meh Conditional-statement is as like this:
//                                   ( condition and/or condition )
//  and ALL Programming-languages meh Work-BOX is as like this:
//                      { codes-lines which are to be executed when then conditional-statement is true };

// and now aab apn Conditional-statement-controller-keywords k bareh meh dekhenge:
/*     
        1. if (yeh Controler-keyword apni following Condition-Statement check krta hai ki yeh true hai k nhi and agr voh true hai toh yeh apne following Work-BOX ko execute kr dega, and agr Condition-statement false huee toh yeh ess Condition-statement and Work-BOX ko pass-to-other(mtlb else if ya else ko pass krdega and phir voh else if ya else apna kaam krenge.) kr dega.)

        2. else if (yeh controler-keyword apni following Condition check tb krega jb if-Contorler ne apni condition ko skip/pass-other krdiya ho tb, and phir agr eski apni following-Condition-statement true huyee toh yeh apne following Work-BOX ko execute kr dega and agr voh false huee toh yeh apni Condition-statement and work-BOX ko pass-to-next krdega. (mtlb ya toh else if ya phir else ko) )
        
        3. else   (yeh controler-keyword apne following Work-box ko tb execute krta hai jb dono if and else if -controllers apni following-condition ko skip/pass krde tb,(mtlb jb following-condition false ho jayeh tb ).)
*/

// NOTE & TIP: thus toh jb bhi apnko ese kuch Condtion lgani ho and phir uss-condition k ture hone pr apnko kuch kaam bhi krvana ho toh then phir apn simply Conditional-BLOCKs ka use krenge: and Conditinal-BLOCKs are is like this:            
//                          if ( condition-statement) { Work-BOX };
//                          else if ( condition-statement) { Work-BOX };
//                          else { Work-BOX };

// NOTE-POINT:and agr apnko kuch multiple Conditions CHECK krni ho then tb vaha pe Apn simply enn if , else if and else ki ladder bana skteh hai, and apn if/else if k andar vapis se if and else if use kr skteh hai and simply nesting of if in if or else if kaha jata hai.

// thus toh apn ConditionaL-BLOCK ka use tb krteh hai jb apn koi kuch condition check krni hoti and phir fir kuch kaam krvana hota hai.

#include<stdio.h>
int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);

    if ( age > 18)
     {
        printf("well done! you can vote\n");
     }
     else if (age > 10)
     {
         printf("your age is greate than 10 so it may be even more than 18\n");
     }
     
    else if ( age>10 && age<18)
    {
        printf(" your age is between 10 to 18 \n");
    }
    else
    {
        printf("sorry your age is even less than 10\n");
    }

    printf("okay all conditional statement are finished\n");

    // note: no-need of semicolon(;) at the end of Condtional-BLOCK. AND but agr apn lagateh hai tb bhi koi issue nhi hai or hoga.
    
    

    // else{
    //      printf("sorry! you are below 18 so that you can't vote");
    //  };
     
     
    




// Flowchart se apnko ek bohat accha visual representation milta hai:
    // scanf( " type of data which will be inputed " , address of variable in which inputed-data to be stored)
// 

// question:we have 3-types of gifts: A , B and C and yeh gifs apnkko unko dene hai jinhone maths and science exam pass ki hai hai, as like who passed both give then A gift and , Those who passed only one of them give them B gift for Maths and C-gift for passing science.
// so ask the students what they get passed and according to thier input-answer tell them that you will rewarded get this respective-gift.


// ##Switch-Case statements:
// switch-case-statement bhi conditional-statement hi hai but apn ense ya enmeh diff-diff condition nhi lga skteh, bs sirf ek equality-condition hi lga skteh hai. 
// thus toh jb bhi apnko sirf multiple equality-conditions check krni ho then vaha pe apn simply Switch-Case-statement ko use krteh hai.. and note-point ki apn yeh kaam if else if se bhi kr skteh hai but yeh switch(){ case var: ;} convinent hai.

// rules for switch-case
/*  1. switch( int or char-container only) 
    2. case integer or character-only:  ;
    3. hr case k baad break; lagana must nhi hai, yeh toh apn isiliy lagateh hai bcoz jb koi condition true hojayeh then voh niche wale cases pe na jayeh. otherwise voh niche wale sbhi cases and including default ko check bina kre bina hi unke work ko execute kr dega krega thus toh agr apn chahthe hai ki apna koi bhi case true hone pr koi or case execute na ho then toh phir apn break; ka use krteh hai , and orr toh orr yeh time-consuming bhi hota hai-mtlb apna program slow hota hai. thus mtlb break; k baad wale case run nhi hoga.
    
*/
int marks;
printf("enter your marksn\n");
scanf("%d",&marks);

switch(marks){
    case 10: printf("your marks are 10 so you are passed\n");
    case 15: printf("your marks are 15\n");
    case 20: printf("your marks are 20\n"); 
    case 25: printf("your marks are 25\n");  break;

    case 30:
     printf("your marks are 30\n"); 
    case 35:
     printf("your marks are 35\n");
      break;
    case 40: printf("your marks are 40\n"); 
    default: printf("your marks are other than 10 , 15 , 20 , 25 ,30 , 35 ,40\n");
}
// NOTE-point: Apn switch-case Statement ki nesting bhi kr skteh hai and krteh bhi hai bcoz esse apna programm or bhi intelligently behave krta hai, jaise: for eg: apn phle students se marks enter kr va lenge and phir baad meh apn unnse unki age k according unke marks bhi bata denge: jaise:

char name1,name2,name3,name4,name5;
int name1_marks,name2_marks,name3_marks,name4_marks,name5_marks;
printf("student-1 enter your names and marks also:\n");
scanf("%c",&name1); 
scanf("%d",&name1_marks);

printf("student-2 enter your names and marks also:\n");
scanf("%c",&name2);
scanf("%d",&name2_marks);

printf("student-3 enter your names and marks also:\n");
scanf("%c",&name3);
scanf("%d",&name3_marks);
printf("student-4 enter your names and marks also:\n");
scanf("%c",&name4);
scanf("%d",&name4_marks);
printf("student-5 enter your names and marks also:\n");
scanf("%c",&name5);
scanf("%d",&name5_marks);

char student_name;
printf("okay now enter the name for which marks are to be known:");
switch(student_name){
    case 'a': printf("your name is aju and your marks is %d\n",name1_marks); 
    int stu_age;
    printf("input you age");
    scanf("%d",&stu_age);
    switch(stu_age){
        case 10: printf("your age is 10"); break; 
        case 11: printf("your age is 11"); break;
        case 12: printf("your age is 12"); break;
        case 13: printf("your age is 13"); break;
        case 14: printf("your age is 14"); break;
        default: printf("sorry! your age is not 10,11,12,13,14"); break;
    }
    break;
    case 'b': printf("your name is ballu and your marks is %d\n",name2_marks); break;
    case 'c': printf("your name is chiku and your marks is %d\n",name3_marks); break;
    case 'd': printf("your name is don and your marks is %d\n",name4_marks); break;
    case 'e': printf("your name is excita and your marks is %d\n",name5_marks); break;
    default: printf("Sorry! we do not have your data");
}

//tip: and apnko Switch-case single-conditional meh bhi at the end semi-colon lagane ki koi jarurat nhi hai. 
// flow-chart of any code-line or code-block simply uss code-line or code-block ki working show krta hai.
    
    return 0;
}