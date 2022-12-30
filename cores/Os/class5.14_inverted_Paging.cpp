// Inverted paging ,normal-paging se ekdam alg hai... , mtlb it inveretedPaging meh pageTable normal-paging ki pageTable se just like inverted hai, mtlb normal-paging ki pageTable meh toh phle page.no se indexing hoti hai, whereas yaha inverted-pageTable meh frame.no. se indexing hoti hai.

// Inverted-paging is good paging ,mtlb it removes bugs/khamiya of normal-paging and that main khamiya is ki there is lot of ram-memory-usage by page-tables only as compare to actual-process itself also.
// So as per inverted-paging we will make only one pageTable for all processes in our harddisk and we call it global-pageTable
// But The main disadvantage of inverted-pageTable is it has O(n)-searchtime.
// But whereas search-time of normal-paging is O(1)-only but its space-complexity is more whereas inverted-paging have less space-complexity but O(n)-timecomplexity
// So toh overall now a days time-matters not memory-space-matters , so mtlb normal-Paging is good with comparison of inveted-Paging.