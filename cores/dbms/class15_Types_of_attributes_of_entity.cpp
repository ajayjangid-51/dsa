// yaha apn koi bhi "entity" k jo attributes hotehh hai na, unke types dekhenge on the basis of ...
// types:-
// 1.single-valued-attribute and multi-valued-attribute
// jaise for-instance(mtlb for example):- student-entity ka "registration-no , age"-attributs  are the single-valued-attributes.
// and jaise "mobile.no , address etc.." attributes are the multivalued-attributes
// notepoint:- single-valued-attribute ko ER-model meh apn usko sinlge-ellipse se represent krtehh hai, and multivalued-attribute ko apn double-ellipse se represent krtehh hai.

// 2.simple-attribute and composite-attribute
// simple-attribute mtlb voh attribute jisko apn further different parts meh divide/classify nhi kr sktehh hai, jaise:- student_age-attribute ko further small parts meh divide nhi kr sktehh.
// and composite-attribute mtlb jisko apn further aur different-parts meh divide/classify kr sktehh hai jaise:- student-name_attribute ko apn further divide kr sktehh hai into first_name , middle_name , last_name. and jaise student_dateofBrith ko apn further divide kr sktehh hai into date , month , year.

// 3.stored-attribute and derived-attribute
// stored-attribute ka mtlb ki voh attributes jinki value kinhi aur attributes se derive nhi kr sktehh hai, mtlb unn attributes ki value toh apnko store krni ya krvani hi hogi by the user. jaise:- student_dateofBirth cannot be derived and ess attribute-ki-value apn kisi other attribute se nhi nikal ya calculate nhi kr sktehh hai, toh mtlb enki value apnko store krvani hi hogi. so toh mtlb stored-attribute ki value toh apnko chahiyehh hi chahiyehh from the user bcoz usko apn baad  meh automatically fill nhi kr sktehh hai.
// and derived-attribute ka mtlb ki enn attributes ki value apn baki attributes se derive kr stkehh hai, jaise:- student_age jisko apn student_dateofBirth se derive(mtlb value get kr) kr sktehh hai. so toh mtlb derived-attribute ki value is optional to fill by the user q ki esko toh apn baad meh automatically derive/calculate kr stkehh hai.
// notepoint: stored-attribute ko toh apn simply er-model  meh "ellipse" se represent krtehh hai. whereas "derived-attribute" ko apn "dotted-ellipse" se represent krtehh hai.

// 4.key and non_key-attribute:-
// key-attribute mtlb voh attribute jisko apn use kr sktehh hai as a candidate-key or primay-key or super-key, jaise: student_admission.no , student_registration.no , studetn_aadhar.no are the key-attribute.
// and non_key-attribute mtlb jisko apn as a candidate-key ,primary-key use nhi kr sktehh, jaise: student_name , student_address, student_age , student_dob etc.etc.
// notepoint:- key-attribute ko Er-model  meh "ellipse-with-underline" represent kiya jata hai. and non_key-attribute ko bhi apn normarlly "ellipse" se hi repsent krtehh hai.

// 5.required-attribute and optional-attribute:- (this category of attribute is not a part of ER-model, but used in sql)
// required-attribute mtlb voh entity ka voh attribute jiski value very required hai, mtlb usko toh fill krna-hi-krna hai. jaise: student_name etc..etc.. as per rules/regulations and requirement of database.
// and optional-attribute mtlb that entity's that attributes which are not mandatory to filled by user, mtlb that value of attribute can be leaved null.
// no.-representation of these attributes in Er-model bcoz it is not classified in ER-model.

// 6.complex-attribute mtlb it is (composite+multivalued)-attribute. jaise student_address with multi phone_numbers.
// no.-representation of these attributes in Er-model bcoz it is not classified in ER-model.