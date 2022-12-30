// Graph:
// 🔥 graph-ds 🔥
/*
As toh graphs meh sbse phle apn terminologies dekhenge... Jo ki graphs k liyeh define hoti hai and use hoti hai..
as toh intially graph is simply defined as collection of "vertices" and "edges". Where "vertices" toh mtlb Nodes hoteh and "edges" mtlb linking-links hoti hai.

// As Graph is a collection of vertices and edges. Where verices mtln nodes and edges mtlb links(node-links)

// Path is a no. Of edges.

Terminologies:-

1. "Indegree" and "outdegree" define hoti hai for the vertex, as indegree mtlb ki vertex pe kitne incoming-edgess haii or mtlb kitne on-indcidence edges hai. And "outdegree" mtlb ki vertex se kitne outgoing-edges hai ya kitni from-incidence-edge-to-other hai.

2. "Self-loop" bhi vertex k liyeh hi define hota hai ki , where self-loop ka mtlb yeh hai ki jab vertex se incidence-edge nikal kr khud pe hi incidence hoti ho then uss phenomenon ko apn "self-loop" hona boltehh hai..

3. "Directed" and "Undirected" define hota hai pure graph k liyeh ki mtlb yeh graph directed hai ya Undirected hai, whereas directed ka mtlb ki graph meh "edges" directed hai mtlb ek-direction-meh pointed hai mtlb actual meh mtlb ki node meh next-node ka address hi store hai na ki next-node meh uske previous-node ka address store hai..
Or as directed-graph ko simply "digraph" bol deteh hai and "Undirected-graph" ko simply sirf "graph" hi boltehh hai..
As Undirected graph meh indegree and outdegree define nhi hoti as only simply degree define hoti hai.

And Undirected mtlb ki graph meh edges non-directed hai mtlb only one-direction meh pointed nhi hai mtlb both-direction meh pointed hai mtlb previous-node meh next-node and next-node meh prev-node ka address store hai..

4. "Parallel-edges" mtlb "Undirected" edge hi hota hai, but as voh Undirected-edge mtlb actully meh voh double-edges hoti hai as toh unn double-edges which are actually oppositly-directed to each-other ko apn simply "parallel-edges" bol deteh haii..

5.  Simple-graph(or simple-Di-graph) mtlb mtlb voh graph jismeh koi "self-loop" and koi "parallel-edges" nhi hotehh.

6. "Non-Connected-graph" as voh jab apne pass 2-alg-alg diff graphs ho then apn unn graphs ko bhi simply singly "graph" bol sktehh hai.. but apn usko acche se "non-connected-graph" bolenge. As toh esseh apnko pata chal jayega ki ess graph meh diff-chote-chote graph-componets present hai.

7."articulation-point" as articulation-point mtlb graph meh voh vertex jinko and jinki-adjacent edges ko remove krne se graph "non-connected-graph" meh convert ho jata hai mtlb "non-connected-graph" ban jata hai.

8."bi-connected" graph mtlb graph k Components strongly connected hai mtlb graph meh koi "articulation-point" present nhi hai.

9. "Strongly-connected" term define hoti hai for "directed-graph" as mtlb agr apn "directed-graph" meh kisi bhi ek-vertex koi bhi any-other vertex pe ja sktehh hai then toh uss digrap ko "strongly-connected" graph boltehh hai.  As apn ek baat acche se mtlb sahi-sahi toh mtlb apn "strongly-connected" graph k liyeh esseh bol sktehh hai ki ess graph koi pair-of-vertex k liyeh path present hai. Or and apn esseh bhi bol sktehh hai ki koi bhi vertex se har vertex pe jane k(mtlb access krne k) liyeh paths present hai ess graph meh.
As apn digraph k liyeh "strongly-connected" term use krteh hai whereas non-directed-graph k liyeh toh apn simply "connected" word hi use krteh hai, as q ki non-directed-graph meh toh esseh hi all paths present hoteh hi hai..

10. As "path" is particular set of vertices to reach an koi particular vertex from any of the vertex


11. Cycle mtlb cylic-path
12. "DAG" (mtlb directed-acyclic-graph) mtlb voh digraph jismeh koi cycle-present nhi hai.. mtlb apn "DAG" meh apn kisi ek vertex se vapis uss vertex pe nhi aa sktehh..

12. "Topological-ordering" mtlb agr apn DAG ko linear-way meh present and all edges in forward-direction meh agr arranged-order  is known as  "Topological-order" and that process of ordering in this order is known as "topological-oredering".

As Graph-ds kafi important "Ds" hai, mtlb esseh bohat sari problems banti hai toh esko apn bohat acche, detail se , analysing se sikhenge..


*/

// As kisi cheez ko , kisi drisahh ko ya kisi phenomenon ko naam dena is known terminology krna.

// 📔 Note-point:- as Graph kafi important topic hai. And most of the question as Graph se hi banteh hai... , Aateh hai.

// As Graph kafi types k hoteh hai jaise:-

// 1. Undirected-Graph
// 2. Directed-graph
// 3. DAG (directed-Acyclic-graph) ( as mtlb esseh yeh Graph directed toh hota hai but Acyclic hota hai mtlb apn ess graph k kisi bhi vertex se start hoke apn vapis uss vertex pe nhi aa skteh mtlb vaha koi cycle nhi banti...

// As tree se toh tree jaisa sketch banta hai.. but Graph se kaisa bhi sketch ban skta hai.. where graph mtlb pencil se kaise bhi drawing bana dena mtlb outline bana dena not Coloring-voloring etc... Only simply pencil se kuch bhi banaya huaa is known as "graph"
// .Thus toh mtlb apne Nodes ki ess tarah irrugularly linking krna mtlb krne se Graph ban jata hai.Mtlb physically overall upar se dekhe toh voh apnko graph hi dikhagi dega...

// Thus toh Tree and Graph meh koi farak nhi hai, bas linking ka farak hai. As mtlb tree meh linking thodi soch-samaj k hoti hai mtlb esseh hoti hai jisseh physically Tree hi banta hai. And Graph meh linking kaise bhi , many tarike se ho skti hai thus toh vaha pe phir simply Graph mtlb simple-outline-drawing ban jati hai...

// As toh mtlb array, ll , stack and queue k baad apne pass simply bohat sare all-type-nodes ka collection hoga and linking hogi.. thus toh bas sirf node-type and linking ka diff-diff combination tarike se hi apne diff "Ds" banenge...

// As graphs ko matrix meh represent krna ek simple tarika hai, as apn phir uss tarike se graph ko easily implement kr pateh hai in the memory.

// dynamic allocation mtlb kabi bhi allocation ho skta hai mtlb program-runtime pe kisi bhi time allocation ho skta hai, and essihi kisi bhi allocation ko hi apn dynamic-allocation bolteh and mostly dynamic-allocation heap meh hi hota hai...