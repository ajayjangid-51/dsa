// 5th normalForm or  lossless ans lossy or mtlb lossful decomposition.
// mtlb ki 5th-NormalForm says ki for to be in a 5th-NormalForm
//  Mtlb jab bhi apn table ko normalize krtehh hai then uss table ko apn decompose or mtlb break krtehh hai into sub-tables for making it normalize, So toh mtlb yeh decomposition k kuch side-effects ho sktehh hai jaise ki table k kuch data,ya mtlb attributes ka loss hojana and attributes k bich ki functional-dependencies ka loss hojana..

// So Toh mtlb apn yaha yehi dekhne wale hai ki decomposition is of two types:-
// 1.lossless and 2.lossy And then phir kuch baateh about prevention of loss in lossy - decomposition

// lossy-Decomposition ka mtlb table-Decomposition ki vajah se while after Joining-the-decomposed-parts-of-table then joined-Table  actual-table se kisi bhi tarah se alg hoti hai then mtlb ki apna Decomposition "lossy" tha.
// so toh now apnko yeh dhyn rkhna hai ki apn Decomposition "lossy" nhi hona chahiyehh,
// so toh sbse phle toh baat krtehh hai ki Decomoposition kya hota hai, decomposition mtlb simply table ko vertically(not horizontally) divide krna and divide krne pr koi ek column dono parts meh common honi chahiyehh ,and as per the 5th-NormalForm it says ki voh Common-attribute(or ya mtlb voh Common-column) should be or can be only and only among "Candidate-key"-set.
// see pic, for seeing other conditions for "common-key" between the tables.
// Natural-join meh apn phle cross-producd krtehh hai then phir condition applykrtehh hai..