//🔥💲🍕 as NOW YAHA pe apn "Huffman-Coding" k bareh meh dekhenge.. ki yeh q hoti hai , kya hoti hai , kaise hoti hai and yeh kab-kab hoti hai. 🍕💲🔥

// que1-answer:- as jaise kabhi-kabhi data-bohat heavy ho jata hai na, and uski vajah se apn usko transport or store easily mtlb at-low-cost pe nhi kr sktehh. thus toh idea yeh hai ki uss data-ko-compress krdo. thus toh allover mtlb ki Huff-coding is just simply a "compressing-technique" Means data ki size ko "compress" krne ki techique...
//🌟🌟🌟  so allover apn esseh bol sktehh hai ki "Huffman-Coding" is a "Compression-technique" mtlb "Data-Compression-technique" mtlb apn ess technique se "data" ki size ko Compress kr sktehh hai mtlb kaam kr sktehh hai, reduce kr sktehh hai. :- 🌟🌟🌟

// question2-answer:- Now aab apn yeh dekhenge...ki technique kaise hoti hai, or mtlb yeh "Huffman" ne kya "idea" lagaya jisseh apn "data" ki size ko kaam kr sktehh hai.
// Okay toh "Huffman" ka "idea" yeh tha ki jaise in general apne computer meh koi bhi 1-character 1byte mtlb "8-bits" meh store hota hai,simply actual mtlb ki "8-bits" are required to represent that this is "this-particular-character". thus toh yeh tarika sahi hai and very Efficient hai , but baat yeh hai ki yeh tarika sbhi all-characters ko consider krtehh huyehh socha gaya hai, all-characters ko consider krna mtlb yeh maan na ki apne paragraph or file meh sbhi type k characters present hai. But esa actually meh hota nhi hai, jaise agr apn apni esi present clas4.cpp-file ka example lele toh, yaha mostly "alfabets" and "numbers" hi use ho rhe hai, mtlb it is about 40-50- diff-characters, thus toh mtlb phir eske liyeh "Idea" yeh hai ki enn "characters" k liyeh koi simple , small-size-consuming "Encoding" define krdo. and then "Transport" the data in that "Encoded"-form , as but transportation k saat apnko voh "Encoding-creteria-table" bhi send krni hai, but now aab yeh "Huffman-coding"-technique ko global kr diya gaya hai, mtlb yeh "Encoding-Creteria-table" sbhi computers meh by-default hoti hi hai, thus toh there is no need of "payloading-the-Encoding-Creteria-table" with "Encoded-message".
//👿📔imp-Note-point:-as yaha Computer-meh store hone se mtlb hai ki jab data process hone k liyeh "ram(main-memory)" meh laya jata hai, tab voh apni actual "default-Encoded(mtlb ASCII-code-Encoding)"-form meh hi hota hai, mtlb usko tab  actual "Default-Encoding"-form meh ram-memory meh store kiya jata hai for accesing, thus toh only for "Accessing" the data , that data should be in its "default-encoded-form", or Other for "stoing-in-HDD" or for "transportation"-purpose we can use that "Huffman-Form".

// And orr dusre really matter krne wali baat yeh hai ki ek sirf "computer" meh store krne ki bhi baat nhi hai, as baat hai for "transportation-of-Data" over the "internet-Network", thus yaha "data-size" meh little-variation bhi kafi accha matter krta hai, thus toh yeh "Huffman-Coding" more likely ess "transportation-Factor" k liyeh hi hai. and imp-baat ki haan "computer" meh toh apn usko store actual default-criteria se krenge and default-creteria se hi hota hai. but jab baat aati hai, about "Transportation-of-data" then vaha apn importantly "Huffman-coding" ka use krtehh hai.

//🔔🔔 Okay toh now aab apn yeh Message ko , file ko etc.etc.. ko "Encoding" krne ka "method" dekhenge , mtlb "Encoding" krna dekhenge...  and more-importantl baat ki ess "Encoding"-method meh apn "Greedy-approach" use krenge... , as q ki yaha apna objective( mtlb mksad ) rhega ki simpe-possible-space meh apnko "message" ko "Encode" krna hai. 🔔🔔

// AS toh "Encoding" apn 2-tarike se kr sktehh hai:-
// 1."Fixed-Sized-Encoding"
// 2."Varialble-Sized-Encoding ("Huffman-Encoding") "

// 🥈🥈 Okay toh aab apn simply ek example leke dekhenge ki how the size varies for normal-message and Huffman-Encoded-Message, as but esseh phle apn yeh "Encoding" krenge by both the "methods" and then phir last meh variations dekhenge...:-
/*
// Okay now we have a normal-message that is:- msg = BCCABBDDAECCBBAEDDCC
// So, toh phle apn ess message ki actual size calculate krenge and then phir esko "Encode" krke again eski "size"-calculate krenge..
//🖼️🖼️🖼️  see pic-1 :- for seeing the procedure of calcuation of "size" of this normal-default-Encoded-message. calculating 🖼️🖼️🖼️ , so the total size of this "normal-message" is "160"-bits

// and now apn esko "Encode" krenge.. and then "Encoded" size calculate krenge...
// 🥈🥈Method1:- (Fixed-sized-Encoding) 🖼️🖼️🖼️  see pic-2 :- 🖼️🖼️🖼️, as apn jatehh hi hai ki Ascii-code(mtlb 8-bit-code) is for all 128-characters.. and here we are having 5-characters so for 5-characters we don't want that big sized "8-bit"-Code. so toh now thoda conclusion krenge ki jaise apn 1-bit se 2-characters ko represent kr sktehh hai, and 2-bits se 4-characterts ka use kr sktehh hai, and 3-bits se apn 2^3 = 8-characters ko represent kr sktehh hai, and soo..on.. thus toh according our situation apn 3-bits ka use krenge for representing these 5-Characters. so toh now enko 3-bits meh represent toh apn kaise bhi kr sktehh hai, mtlb jaise for "A" ko apn as a 000 or 001 or 100 etcc... etc.. koi bhi ek "code-bit" meh assign kr sktehh hai. thus toh now aab overall apn uss Message ko ess form meh "likhenge.." and actually mtlb ess message ko ess form meh "Encode" kr denge, via making a program for Encoding according to this "Criteria". and one imp-note-point ki apnko ess Encoded-message k saat voh table-bhi-send krni hai , as q ki phir aage yeh message jab vapis "decode" hone k liyeh yeh table chahiyehh hogi, as q ki esi table se hi "Decoding" hogi.
// As toh now apn allover conclude kr sktehh hai ki apne normal-message ki size thi "160-bits"  and now "Encoded"-message ki size hai 60+55 = 105-bits, toh mtlb approximately 30-40% size reduction huyi hai, jo ki kafi acchi and sahi  baat hai.



// 🥇🥇🥇Method2:- (Variable-sized-Encoding) 🖼️🖼️🖼️  see pic-3 :- 🖼️🖼️🖼️, as ess method se "data-size" aur jda decrease hogi( as q ki yaha apn diff-characters k liyeh diff bit-size-code use krenge.. mtlb jitni requirement hai, utni bit-size hi use krenge..), toh mtlb yeh method aur bhi sahi hai, acchi hai, mast hai. thus toh now aab aage se apn "Data-compression-Encoding" k liyeh yeh method hi follow krenge...
// toh actual baat yeh hai ki mtlb "Huffman" ne yeh bola ki bit-size apnko character-ki-frequency k according decide krna hai, mtlb agr kisi character ki "frequency" jdaa hai, then represent it in less-no.-of-bits , so toh overall "size"-decrease acchi amount se huyeh.

// So toh Huffman k according apnko "Encoding" esseh krni hai chahiyehh, as "Huffman" ki yeh method "Optimal-merge-Pattern" ki aproach ko use krtehh hai.
// So toh "Huffman-ECoding"-method is that ki sbse phle arrange all the characters in the increasing order their frequencies. and then simpy form the pattern(mtlb "tree") , as we were forming in "Optimal-merge-pattern" ki first always select the pairs-with-minimum-count, and creating "Optimal-Pattern( mtlb it visulize as like Tree, as but yaha yeh "Tree" as "Tree"-ds nhi hai, as yeh bas simple drawing-pattern hai), mark all the left-links as "0" and mark all the right-links as "1". and now simpy assign the codes to every "character" by just simply following-the-path-from-root-to-that-"character-node". 
//🖼️🖼️🖼️  see pic-4,5:- for seeing the "Huffman-Encoding"-creteria 🖼️🖼️🖼️
//🖼️🖼️🖼️  see pic-6:- for seeing the seeing the sizes as per this "Huffman-Encoding"-creteria-method 🖼️🖼️🖼️

//📔📔Note-point:- so toh with the "Encoded-message" apnko "Table" bhi saat meh payload krni hogi or phir apn voh "optimal-merge-pattern"-tree bhi payload kr sktehh hai.
//🖼️🖼️🖼️  see pic-7 :- for seeing the payload "table"-size 🖼️🖼️🖼️, and we can also calcuate the table-size via "Tree" also.
//🖼️🖼️🖼️  see pic-8 :- that how "Decoding" is done... 🖼️🖼️🖼️
// so yaha ess method se apne "encoded"-message ki size is equal to "45"+"52" = "97", so toh mtlb in comparison with metho1, the size of data is still decreased by 5%-10% more. mtlb overall the size is reduced by 40-50% toh mtlb yeh "method2" kafi sahi cheez hai , mtlb baval cheez hai.
// So toh overall mtlb yaha ess method meh "characters" k liyeh diff-diff bit-sizes codes hai.

*/
//

// as apn janteh hi hai ki computer meh apn jo bhi likteh hai.. voh encoded-form meh store hota hai, as q ki cpu meh vase hi storing ki ja skti hai mtlb 0-1 ki form meh and yaha encoded-form ka mtlb hi yaha 0-1-form hai... Or koi bhi any other "form" ko bhi apn encoded-form bol sktehh hai bas itna yeh baat honi chahiyeh kisi cheez ki encoding ko vapis decoding kr ske mtlb vapis uss meh convert krne k liyeh bas ek tarika hi hona chahiyeh, agr esseh kuch hai then that form of that cheez is called encoded-form of that cheez...

//📔📔Note-point:-  As fixed-size-encoding ka mtlb ki jo apnni encoding-form hai unn sab ki size ek hi hai..

// 🥇🥇🥇 :- // And variable-size-encoding ka mtlb sbhi cheezo ki size diff-diff according to actual cheez k liyeh jitni jarurat hai... ( And this is actually only called "huffman-coding" mtlb real  meh "Huffman" ne yeh cheez hi suggest ki thi mtlb "Huffman" ne yeh "variable-size-encoding" hi suggest ki hai.)

//👿📔imp-Note-point:- As "huffman-coding" meh apn optimal-merge-pattern-according-to-greddy-approach follow krke tree-or-table banateh hai for encoding-criteria
