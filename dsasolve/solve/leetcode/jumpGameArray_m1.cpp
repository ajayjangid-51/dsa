bool solve(int index, int val, vi &store, vi &A)
{
//     // base-case:-
//     // if(A[index]>= val) return true;
//     if(A[index]<val) return false;
//     // store-case:-
//     if(store[index]!=-1) return store[index];
//     bool ans;
//     bool tmp =0;
//     int indi = index-1;
//     while(!tmp and indi){
//        tmp = tmp or solve(indi,index-indi,store , A);

//     }

//     ans = ans and ans;

// }
#define vi vector<int>
    int Solution::canJump(vector<int> & A)
    {
        int n = A.size();
        vi store(n + 1, -1);
    }
    // In net-general boleh toh "dp" k liyeh "iterative"-implementation easy hai in comparison to "recursive-implementation",
    // but "dp" solution banana "top-down"-approach se aasaan hai in comparison to "bottom-up"-implementation.
