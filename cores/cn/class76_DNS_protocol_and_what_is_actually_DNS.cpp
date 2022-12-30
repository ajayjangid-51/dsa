// DNS (domain-name-system or server) or ya mtlb domain-name-server mtlb jaha domain-name and thier respective ip-address stored  hai.
// DNS is same like our phonebook jismeh names are as domain-names and phone-numbers are as ip-address.
// 1.And basically main purpose of introducing the DNS is ki there is a aasani in remembering the websites domain-names instead of their ip-address
// 2.And second reason of introducing or using DNS is bcoz of "dynamic-ipAddresses" mtlb servers k,machines k ip-addresses hamesa change hotehh rhtehh bcoz of many reasons jaise ki bcoz of shifting of webhosting-service-provider ,changing the machine by new or other machines , etc..etc
// And but dns k according mtlb ki domain-name change nhi hona chahiyehh,agr hota hai then vha dns-server or we can say dns-table meh entry vapis alg se krni hogi.

// **Aab now baat krenge ki jaise apn apne browser meh koi domain-name daaltehh hai then voh uske ip-address meh kaise map hota hai,voh apn dekhenge
// "www.amazon.com"
// Www. Ka mtlb hai www meh,whereas ”.(dot)” Ka mtlb “precedor meh”
// So toh www ka mtlb root-server(pure world meh abhi tk 13 root-servers hai) meh jana hai, and then phir domain-name ko reverse-order meh traverse krna hai.. mtlb like phle .com then .amazon etc..etc..

// Dns-caching ka mtlb ki apna isp(internet-service-provider) apne app "frequently-requested-domain-names" ka ip-address apni cache-memory meh store kr leta hai toh mtlb har baar apni request ko root-servers,then generic-servers etc..etc pe nhi jana padega,mtlb voh apni request directly ip-address destination pe jayegi by taking domain-name’s ip-address from ISP-cache-memory
// Toh mtlb sbhi layers ka kaam phle se hi mtlb sender k duvra mesaage sending k time hi ready ho jata hai,bs unka kaam aur mtlb unka use unka time ya turn aane pe hota hai.

// Ip-address meh network-id and host-id hoti hai..
// Inband-protocol ka mtlb data and commands ek hi port.no se nikaltehh hai, whereas outband-protocol meh commands and data alg-alg port se nikaltehh hai
