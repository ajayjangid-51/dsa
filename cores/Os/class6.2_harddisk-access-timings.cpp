// harddisk-accessing-timings mtlb jab harddisk se data access hota hai then vaha kuch time lgta hai, toh usi time ko apn classify krenge ki kaha-kaha kin-kin kaamo meh kitna-kitna time lgta hai.

// 1.seek-time (mtlb read/write-head ko plate meh desired-track pe jaane meh jo time lgta hai uss time ko apn seek-time khtehh hai.) and on-average seek-time meh apnko half-of-total-tracks toh cross krne hotehh hai. and allover data-access k total-time meh yeh "seek-time" hi sbse jada hota hai, mtlb acchi harddisk banane ka main-task yeh hi hota hai ki apn esi harddisk banayeh jismeh "seek-time" kam-se-kam ho.

// 2."rotation-time" (mtlb plater ko 1round(360deg) ghumne k liyeh jo time lgta hai usko "rotation-time" boltehh hai.) and Plater-rotation essliy hota hai takki apn apne track meh desired-sector pe puch sake.

// 3."rotational-latency" (mtlb present-track meh desired sector pe puchne meh jo time lgta hai usko "rotational-latency" khtehh hai and yeh esmeh on-average plater ko half-round toh ghumna pdta hai.  )

// 4."transfer-time" (mtlb (amount-of-data-to-transfer/transfer-rate)) , where amount-of-data toh apnko select krna hai and "transfer-rate" amount of data can be transfer per second.
// wheras transfer/data-rate is measured as (total-no.of-readwrite-heads * capacity-size-of-that-rwhead's-track *rotation-rate )

// 5."controller-time" (mtlb voh software jo ess puri harddisk-elements ko control kr rha hai toh uss control krne meh jo time lgta hai usko "controller's-time" boltehh hai.)

// 6."queue-time" (mtlb jaise agr harddisk pe ek saat multiple request aajati hai then harddisk apni buffer-memory-queue meh unko store kr leti hai then then phir one-by-one unn data-access-request ko process krti hai. toh mtlb uss queue meh jo waiting-time hota hai for data-access-request usko apn "queue-time" boltehh hai. )

// so toh total-time of data-access-request from harddisk is equalto == seek-time+rotationallatency+transfer-time+controller-time+queue-time.