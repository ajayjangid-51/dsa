//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    cout << "enter this";
    vector<vector<int>> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        // cin >> arr[i][0]; // as apn esseh nhi kr skteh hai.
        cout << "now k ";
        cin >> k;
        // arr[i][0].push_back(k);

        // for (int j = 1; j < arr[i][0]; j++)  // yeh apn esseh nhi kr skteh..
        cout << "put the value of reff-arr in the arra a" << endl;
        arr.push_back(vector<int>());
        for (int j = 0; j < k; j++)
        {
            cout << "now input " << endl;
            int k1;
            // cin >> arr[i][j];
            cin >> k1;
            arr[i].push_back(k1);
        }
    }
    vector<vector<int>> qrr;
    for (int i = 0; i < q; i++)
    {
        // cin >> qrr[i];
        qrr.push_back(vector<int>());
        for (int j = 0; j < 2; j++)
        {
            cout << "now for q i and j ";
            // cin >> qrr[i][j];
            int x;
            cin >> x;
            qrr[i].push_back(x);
        }
    }

    for (int i = 0; i < q; i++)
    {
        cout << arr[qrr[i][0]][qrr[i][1]] << endl;
    }
    // cout << arr[qrr[1][0]][qrr[1][1]] << endl;
    // cout << arr[qrr[1][0]][qrr[1][1]];

    /* :M2:
    int main() {
     Enter your code here. Read input from STDIN. Print output to STDOUT 
    int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> nvec;
    for (int i = 0; i < n; ++i)
    {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; ++j)
        {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    for (int k = 0; k < q; ++k)
    {
        cin >> which >> index;
        cout << nvec[which][index] << endl;
    }
    return 0;
}
* /

    /* M3:
int main() {
     Enter your code here. Read input from STDIN. Print output to STDOUT 
    int n,
    q, k, i, j;
cin >> n >> q;
vector<vector<int>> arr(n);
for (i = 0; i < n; ++i)
{
    cin >> k;
    arr[i].resize(k);
    for (j = 0; j < k; ++j)
    {
        cin >> arr[i][j];
    }
}

for (int l = 0; l < q; ++l)
{
    cin >> i >> j;
    cout << arr[i][j] << endl;
}

return 0;
* /

    return 0;
}


// 🔔 using of 2D-vector is our ek-dam right approach thi.