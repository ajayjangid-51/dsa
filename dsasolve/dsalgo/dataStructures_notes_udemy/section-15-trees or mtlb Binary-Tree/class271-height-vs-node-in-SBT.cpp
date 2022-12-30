// 🍧🍧 height vs nodes in strict-binary-tree 🍧🍧
//🔥💲 AS NOW YAHA pe apn Strict-Binary-tree meh height vs nodes dekhenge mtlb ki strict-binary-tree meh nodes and strict-binary-tree ki height k bich meh kya relation hai. mtlb strict-binary-tree k nodes and eski height k bich meh kya relation hota hai. mtlb yeh nodes and height ek-dusre pe kaise depend krti hai... 💲🔥

//🔔🔔 as apn yeh 2-baateh vapis se dhyn krenge ki "tree-ki-height" starts from 0(zero) and "tree-ka-level" is starts from 1(one) 🔔🔔

// AS toh phir above-observation se apn yeh conclude kr sktehh hai, mtlb yeh bol sktehh hai ki: minimum-no-of-nodes is equal to 2*(height-of-tree) + 1.
// as toh formulatically apn esseh likh sktehh, bol sktehh hai ki: 🔔🔔 min-nodes = 2*(height-of-tree) +1 🔔🔔

// and maximum-no-nodes is equal to 2^(h+1) -1
// as toh formulatically apn esseh bol sktehh hai ki:
//🔔🔔 max-nodes = 2^(h+1) -1 🔔🔔 ( as yeh simply voh sum-of-n-terms-of-gp wala hi hai.)

//📔📔Note-point:- as toh agr apnko heigth-of-strict-binary-tree de rkhi ho then phir toh apn simply yeh upar wale doo-formulaes use kr sktehh hai for finding the minimum or maximum no-of-nodes needed to construct or to build the strict-binary-tree of that given-Height.

//💲 AS toh agr apnko no.-of-nodes de rkhe ho then apn yeh formulas use krenge yeh batane k liyeh ki enn itne nodes se apn kitni minimum and or kitni maximum height ka binary-tree apn construct kr sktehh hai mtlb bana sktehh hai. 💲
//🔔🔔 as toh ess upar-wali baat k liyeh mltb ki agr apnko no.-of-nodes de rkhe ho then apnko simply yeh formulaes ko interchange kr dena hai mtlb min-nodes wala toh max-height k liyeh hojayega and max-nodes wala min-height k liyeh hojayehga.   🔔🔔

//👿📔imp-Note-point:-AS toh overall yaha pe Height-of-strict-binary-tree important hai in the terms of analizing the time and space-complexity of the operations on the strict-binarry-tree , thus toh from above apn height k liyeh yeh conclude kr sktehh hai ki height ki minimum-value toh logrithmic hai and maximum-value "linear" hai toh agr koi operation ka time-taken or time-consumption or space-taken or space-consumption "height" pe dependent hai then vaha pe apn yeh conclude kr sktehh hai ki ess operation k liyeh worst-case-complexity toh order-of-(n) hogi and best-case-complexity order-of-(logrithmic) hogi. as q ki mtlb strict-binar-tree ki height vary krti hai from "logrithmic" to "linear".