// so toh filesystem-software ki aage baat krne se phle apn file k bareh  meh janenge ki jaise: file hoti kya hai(file is simply collection of data or mtlb information in a form meh text or binarycode )

// fileAttributes/fileProperties mtlb file k गुण aur ya mtlb file ki informations( file ki information mtlb yeh nhi ki uss file meh jo data hai voh information, it is like metadata(mtlb data about data). so mtlb yaha file-ki-information mtlb voh jo file hai uske bareh meh information jaise: file ka name kya hai, file kab create ki gayi , file kab modify ki gayi, file ki extension kya hai(mtlb file ka type kya hai, mtlb hota kya hai ki different type of file ko open ya decode krne k liyeh diffrent softwares ki jarurat hoti hai isiliy mtlb file-type ya mtlb file-extension jaruri hai.) ,file ki location kya hai, file ki size kya hai etc..etc. yeh sab ko apn file-ki-information or simply shortly fileattributes boltehh hai.).
// FileAttributes list:-
// 1.file-name
// 2.file-extension(or mtlb file type)
// 3.Identifier (it is important for Os point of view not for user's point of view, jaise as like college gives us admission.no as identifier to identify us and yeh sab k iyeh unique bhi hota hai.)
// 4.file-location ( like jaise: C://users/ajayjangid/file1.cpp)
// 5.file-size ( jaise: 1kb file , 1mb file , 2gb file etc..etc..)
// 6.modified-data/created-date
// 7.file-protection(jaise protection are given to:-admin , user , others)/file-permission(jaise permission are read/write/)
// 8.file encryption/file-compression

// and fileoperations mtlb file pe operations krna jaise files pe apn yeh yeh ooperations kr sktehh hai aur ya apn aseh bhi bol sktehh hai ki filesystem-software apnko yeh yeh file pe operations allow krta hai. jaise: file ko modify krna , delete krna , truncate krna etc..etc.. are all the operations done on files.
// different possible operations on files:-
// 1.creating file ( and file-creation k time ya file-mofication k time hi yeh voh fileAttributes introduce ya change kiyeh jati hai)
// 2.reading-file (jaise opening the file in readonlymode)
// 3.writing-file (or mtlb modifying file)
// 4.deleting-file (mtlb file ko remove/delete krna, mtlb esseh file ka data and metadata dono hi pure-k-pure delete hojayenge.)
// 5.truncating-file (mtlb sirf file-data delete krna, but metadata delete nhi krna)
// 6.repositioning-file ( repositing-of-file ka mtlb ki file ka jo read_write-head hota hai mtlb jaha se file ka read hona start hota hai, usko position ko change krna.)

// notepoint1:-
// so toh enn fileAttributes or mtlb filemetadata ki vajah se hi jo disksize hoti hai,usmeh se thoda kam space hi use kr sktehh hai q ki baki space "metadata" store krne k liyeh hota hai.

// notepoint:-
// Operating-system sbhi cheezo(data , information , keyboard , mouse etc..) ko as a file-form meh store krke rkhta hai.
