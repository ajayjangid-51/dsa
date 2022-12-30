#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    int n, q;
    cin >> n >> q;
    vector<int> a;
    int k;
    cin >> k;
    vector<int> refa;
    // a.push_back(refa);

    // cin >> k;
    for (int j = 0; j < n; j++)
    {
        cout << "put the value for ai" << j << endl;

        for (int i = 0; i < k; i++)
        {
            // cout << "put the value of k" << i << endl;
            int k1;
            cin >> k1; // as apn sare cin ek saat meh hi de skteh hai.
            refa.push_back(k1);
        }
    }
    int i, j;
    cin >> i >> j;
    vector<int> qar;
    vector<int> qarr;
    for (int i = 0; i < 2; i++)
    {
        int qq;
        cin >> qq;
        qarr.push_back(qq);
    }

    cout << "the values of refa-array" << endl;
    for (auto i = refa.begin(); i != refa.end(); i++)
    {
        cout << *(i) << " ";
    }

    // for (int i = 0; i < q; i++)
    // {
    //     int i, j;
    //     cin >> j >> j;
    // }

    */

    // By-Using-2D-vector-approach:
    // vector<vector<int>> vec2d;
    int k = 4;
    // vec2d.push_back(4);
    vector<vector<int>> vec2d{
        {2, 4, 5},
        {2, 4, 5, 8},
        {2, 4}};

    for (int i = 0; i < vec2d.size(); i++)
    {
        // cout << vec2d[i];  // as yeh 2D-vector hai toh esliy apnko error-show ho rahi hai q ki 2D-vector ki liyeh apnko 2D-vector meh bhi vector ko bhi specify krna hota hai.

        // cout << vec2d[i][1] << endl;
        // as toh apnnne yaha pe 2D-vector k ith-vector k 1st-index element ko specify kiya hai.
        for (int j = 0; j < vec2d[i].size(); j++)
        {
            cout << vec2d[i][j] << " ";
        }
        cout << endl;
    }

    // 💱 Exercise Problem : Define the 2D vector with different sizes of column.
    // 📓note-point: as apn 2D-vector or 2D-array ko as matrix bhi treat kr skteh hai.

    return 0;
}

// visit for 2d-vector: https://www.geeksforgeeks.org/2d-vector-in-cpp-with-user-defined-size/