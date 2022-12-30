// many-to-many relationship ko apn M-N relationship bhi boltehh hai, just for the sake of confusion-na-ho.
// jaise ki apnne class17(one-to-many) meh hi dekh liya tha ki many-to-many relationship kya hoti hai,  and the most appropiate and easy example is student-course-relationship. (mtlb ki ek student_element can study multiple-courses and ek course_element can be study by multiple_student_elements)

// toh yaha apn simply basically yeh dekehnge ki jab apn Ermodel ko relational-model meh convert krtehh hai then vaha kya-kya batehh hoti hai about the primary-key for relation-table , then how to reduce the no.of-tables.
// 1.primary-key for relation-table will be composite-key-of "roll.no + Course.id".
// 2.no.of tables can't be reduced.

// notepoint:-
// 1."sql" is highlevel-programming-language which is used to create relational-database(mtlb database in a form of "tables").
// 2.ER-model is used for designing the "database" and "relational-model" is used for implementing or mtlb coding the "database".