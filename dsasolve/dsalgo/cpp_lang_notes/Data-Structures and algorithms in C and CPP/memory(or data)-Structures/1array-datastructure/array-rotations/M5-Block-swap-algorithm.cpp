// M5: block-swap-algorithm:
// as ess algorithm ka yeh idea hai ki apn phle first given-array ko 2-parts of the indexes: (0 to (d-1)) and (d to (n-1)) meh divide krenge and then:
// agr part-A is shorter part-B then divide B into Bl and Br , such that ki Br ki length A k equal honi chahiyeh. and phir apnko simply "A"-block and "B"-block ko swap krna hai , and yeh kaam apnko aab B pe repeat krna hai jab tk apnkko sub-parts ki size same na mil jayeh.
// and as agr part is longer than part-B , then divide A into Al and Ar , such that Al is same as B, now then Al and B ko swap krna hai, so aab B apni sahi position pe and yeh kaam apnko A pe vapis se repeat krna hai jab apnko sub-parts ki length equal-nhi hoti. as toh atlast meh apnko apna rotated-array mil jayega.

// as ess algorithm ki Time-complexity is O(n) hoti hai.

// Now-implementing this idea:
