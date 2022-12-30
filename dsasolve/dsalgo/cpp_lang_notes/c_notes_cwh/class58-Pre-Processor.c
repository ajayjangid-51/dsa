// YAHA pe apn Pre-Processors-Statements/commands k bareh meh dekhenge:
// thus mtlb yaha pe apn yeh dekhenge ki pre-processing meh actually kya-kya hota hai and kaise-kaise hota hai.
// actual-process se phle hone wale kaam ko pre-processing hona khteh hai. and pre-processor voh hoteh hai jo ki pre-processing ko krvateh hai ya krteh hai.
// pre-processing voh process hoti hai jo ki program-compilation hone k hai jinmeh pre-processor ka kaam kiya jata hai.
// pre-processor voh kaam hota hai jo ki  pre-processing meh hota hai mtlb actual-process start hone se phle hota hai. means voh processes jo program-compilation se phle ki jati hai.
// kuch koi process krne wale ko uss process ka processor bolteh hai.
// Pre-processor-statements simply voh Statements hoti hai jo program compilation hone se phle execute hoti hai.
// thus pre-processor voh cheez hai jo ki pre-processing krvateh and pre-processing meh kaam krvateh hai. and note-point: ki pre-processing ka compilation meh koi role nhi hai , bcoz yeh compilation hone phle hota hai.

// mtlb apn gcc likh kr program ko compile krteh hai then , vaha sbse phle pre-processing hoti hai , then compilation, then assembly and atlast linking.

// pre-processor-statements #-keyword se follow hoti hai. mtlb #-keyword ko follow krne wali statement- Pre-processor statements hoti hai , mtlb yeh statement Program-compile hone se phle execute hoti hai.

//  preprocessing (pre-processing mtlb Actual-process shuru krne se phle jo bhi kaam krna hota hai ya actual-process shuru hone se phle jo bhi kaam hota hai usseh simply pre-processing khteh hai or as acche se boleh toh mtlb preprocessing meh pre-processor-Statements run hoti hai,scan hoti hai., thus toh sbse phle compiler pre-processing krta hai and pre-processing yeh-yeh kaam hoteh hai jaise:
//     1.pre-processor statements ko execute krna ( mtlb dependencies-files ko include krna , macros ko expand krna )
//     2.comments ko hatana , remove krna.
//     3. .i-file create krna and phir ess .i-file meh pre-preprocessor-statements k content ko  and code ko store krna.

// (and where pre-processors ya pre-processor-statements voh statements hoti hai jo ki pre-processing meh execute hoti hai ya ki jati hai.)
// As yeh preprocessing honi and krni jaruri bhi hai jaise aage compilation-process meh toh directly written-code ki .s file ban jati mtlb voh written-code directly assembly-instruction meh convert kr diya jata hai. thus pre-processing ban esliy krteh hai takkki aage compilation-process meh koi proble na ho and koi kami na aayeh. jaise pre-processing meh comments remove ho jati hai thus , isiliy aage sirf code hi assembly-instruction meh convert hota hai otherwise agr vaha comments hoti toh mtlb vaha pe error ho jata mtlb unnn comments kaise assembly-instruction meh convert ho skti bcoz voh comments koi understable-syntax follow nhi krti hai , orr etc..etc.. bohat sare esseh kaam hoteh jo apnko compilation hone se phle hi krna hota hai.

// as mtlb program run hone se phle yeh statement/commands run honge.

// Now apn kuch pre-processor-commands dekhenge:
// Some pre-processor-commands:
/*  1.#include  (ess pre-processor command se apn actual-process se phle hi files ko include kra dete hai in .i-file jo ki phir compiler-compilation meh use krta hai.)
    2.#define (ess pre-processor command se macro-define hota hai. )
    3.#undef (ess pre-processor command se macro- undefine hota hai.)
    4.#ifdef (ess pre-processor command se macro-define hai  yeh check hota hai and return the true or false)
    5.#ifndef (ess pre-processor command se macro-define nhi hai yeh check hota hai.)
    6.#if (yeh compile-time-condition ko cheack krta hai)
    7.#else
    8.#elif (same is else-if)
    9.#pragma

// note-point: apni .h header-file sare k sare pre-processor-commands hi likhe hoteh hai.
    */