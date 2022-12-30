// (BCNF)Boyce Codd NormalForm:-
// It is just like ki special-case of 3rdNomalForm, mtlb yeh normal-Form 3rd-NormalForm wali hi baat bolti hai, but uss 2nd-condition meh spcially add kr deti hai ki LHS(lefthandside)-of-FunctionalDependency should always be "CandidateKey or Superkey".

// Toh mtlb thisbNormalForm says ki sabhi Functional-Dependencies meh leftside meh candidate-key hi honi chahiyehh, mtlb ki every attributes should be determine or found by only "CandidateKey" only.

// So mtlb for a table to be BCNF-form then:-
// 1st. it should be in 3rd - normalForm.
//  2nd. Is ki L.h.s of all FDs should be CandidateKey or superkey.