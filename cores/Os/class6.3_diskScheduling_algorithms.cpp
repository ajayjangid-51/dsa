// disk_Scheduling algorithms mtlb harddisk meh jo buffer-memory meh "data-access-request-queue" hoti hai usmeh jo data-access-requests hai unko Schedule krna mtlb unko process/run krne k liyeh Schedule krna is simply called disk_Scheduling and yeh jo disk_Scheduling_algorithms are designed as per one thing ki "seek-time" kam-se-kam ho.

// so toh "disk_Scheduling_algorithms" ka jo main goal hai voh yeh hai ki "seek-time" ko kam-se-kam mtlb minimize krna hai,

// note:-
// so toh mtlb yeh "disk-management" bhi "Os" hi krta hai, mtlb jaise:- "harddisk's-devices-controlling", "diskScheduling_algorithms" , etc.. sab banana/execute krna "Os" ka hi kaam hai.

// different "disk_Scheduling_algorithms" are:-
// 1. FCFS-diskScheduling_algorithm (first-come-first-serve)-diskScheduling-algorithms
// 2.SSTF (shortest-seektime-first)
// 3.SCAN or elevator-algorithm (disk-arm continously moves from inner-track to outer-track and then reverse its direction and path meh jobhi requests aarhi hai voh access ho jati hai.)
// 4.Look (disk-arm continousely moves cyclicly from inner-track to outer-track and then again inner-track-to-outer-track.)
// 5.CSCAN (circular-look)
// 6.CLOOK (circular look)
// 7.RSS (random Scheduling)
// 8.LIFO (last in first out)