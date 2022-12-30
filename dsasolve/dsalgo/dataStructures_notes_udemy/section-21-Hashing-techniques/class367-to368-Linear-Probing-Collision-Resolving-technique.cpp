//🔥💲🍕 🍕🍕Linear-probing🍕🍕 🍕💲🔥
// Prob mtlb problem and probing mtlb jaach-padtal krna.
// Thus toh linear-probing mtlb linearly-jaach-krna...

// Thus toh mtlb apn ess method meh jab collision hota hai then tab apn linearly hi toh jaach-padtal krteh hai mtlb linearly hi toh vacant-space dhundteh hai in HAsh-Table..
// And jada sahi se boleh toh mtlb apn ess kaam ko krne ka ek Function banaleteh hai, and thus phir aage apnko kabhi yeh kaam krna hoga then apn uss apne linear-prob-function ko hi puchenge...

//🔔🔔 And voh Function yeh hai...
//  H'(x) = ( H(x) + f(i) )%10 ) where  H(x) = x%10 and f(i) =i
// Where i increase from 0to... Till vacant-space is not found..
//  🔔🔔

// for all about "Linear-Probing" //🖼️🖼️🖼️  see pic-1 :- 🖼️🖼️🖼️
// as ess pic-1 ko dekh k apn sab kuch samaj sktehh hai ki:
// 1.Insertion-kaise-krna hai.
// 2.Searching-kaise-krni hai, as searching k liyeh apn points note krenge:- ki
// As apnko apnko search tab tk krna hai kab apnko elememt na mil jayeh or apnko koi vacant-space mil jayehh. As vacant-space ka mtlb ki yeh sure hai ki jo element apn search kr rhe hai voh present hai hi nhi... As voh present hota then linear-way meh koi space bhar chuka hota ya otherwise apn vacant-space pe pochne se phle hi apnko elememt mil jata...

//👿📔imp-Note-point:-as apn jantehh hi hai ki "analysis-of-Hashing" is done according to loading-factor(lambda) , where:
//                           loading_factor = (n/size-of-hash-table) , {where "n" is no.-of-elements}.
// as yeh apn essliy krtehh hai q ki agr apn "Hashing" ki analysis "n" meh hi krtehh hai then mtlb voh phir linear-search-time-complexity k equal hi lagegi na, where yaha "Hashing " meh "n"-ki-value kafi-kafi choti hai ho jati hai as compare to "Linear-Search". thus mtlb enki time-complexities meh toh kafi difference hai. and agr apn "Hashing" ki time-complexity ko "n" meh present krtehh hai , then mtlb yeh toh sahi nhi hai.. q ki phir log toh yahi samajenge ki dono ki "time-complexities" same hi toh hai... and voh sahi samajenge.. thus isiliy phir ess confusion ko hatane k liyeh "Hashing" ki time-complexity "loading-factor" meh present krtehh hai. 👿📔
//🖼️🖼️🖼️  see pic-2 :- 🖼️🖼️🖼️
//🌟🌟🌟 apn ek baat orr note krenge about:- "Loading-factor" that ki " loading-factor ki value hamesa less-than or equal-to 0.5 honi chahiyehh mtlb (as mathematically apn esko esseh represent kr sktehh hai mtlb esko esseh bol sktehh hai ki  "y <= 0.5" ) "  as ess baat ka actual mtlb yeh hai ki "size-of-hash-table" hamesa kaam-se-kaam "no-of-elements" se double-honi-chahiyehh. . Thus Now yeh baat isliy hai ki apni "Hash-Table" meh "Clustering" na ho , as mtlb "Clustering" nhi hogi toh mtlb apni "Searching-fast-hogi" and yehi apna main mudda hai ki kaise taise "Searching-ko-fast-krna-hai". now ek-baat yeh bhi hai ki esseh loading-factor ki value 0.5 hoga, mtlb apni half-of-space-waste-ho-rhi hai, but voh koi nhi itna space toh chlta hai.. as agr apna "actual-mudda" apnko achieve ho raha hai toh....
// or ya apn esseh bhi bol sktehh hai...
// This means ki hash-table aadhi ya addhi-se-bhi-kaam hi bhari honi chahiyeh. Mtlb ki apnko hashtable-size mtlb hash-function according toh no-of-elememts k basis pe lena hai.. mtlb jaise agr 5-element hai then apnko hashtable of size kaam-se-kaam 10 leni hai...
// 🌟🌟🌟

//🔔🔔 Drawbacks-of-linear-probing:- 🔔🔔
// 1. Half-of-space of hash-table remained empty so mtlb space-is-wasted
// 2.formation-of-cluster of element in contigous-position so there leads to slow-searching as q ki apnko bina-faltu k elememts jo bich meh aa rhe hai unko bhi search krna rheta hai.. as This is called as "primary-clustring-of-keys". Which means many keys comes in contigius-line at one area only... Which leads to slow- searching as there are no-vacant-space there and we cannot stop until the element found or vacant-space is found.

// 🍕Deletion-operation-in-linear-probing...🍕
// As basically deletion-in-linear-probing it is not suggested.. As q ki.. Jab apn kisi element ko dlt krteh hai then jo vacant space rheti apnko usko fill krna hoga and vacant-space ko bhi apnko accordingly fill krna hoga mtlb elements ko shift thoda dhyn se krna hoga mtlb apnko yeh dhyn rkhna hai ki jis element ko apn shift kr rhe hai kahi apn uski actual hash-position se toh shift nhi kr rhe hai na... Thus toh mtlb deletion k baad shifting kafi effortfill ho jayegi , thus toh eska solution hai ki element ko delete krne k baad vapis Re-hashing krdene chahiyeh.. but vohi baat yeh process bhi time-consuming hoga.. thus eska solution hai ki phir simply flags ka use krlo jo ki yeh batayega ki element hai ya nhi hai...
//📔📔Note-point:- Thus toh allover boleh toh apnko linear-probing meh deletion nhi krna hai... Bcoz yeh kafi costly padega...
//🖼️🖼️🖼️  see pic-3 :- for this Deletion-process 🖼️🖼️🖼️

//🔔🔔 Time-complexities:- 🔔🔔
// And these are also the time-complexities... Jo apnko directly dhyn meh rkhni hai...
//🖼️🖼️🖼️  see pic-3 :- 🖼️🖼️🖼️
