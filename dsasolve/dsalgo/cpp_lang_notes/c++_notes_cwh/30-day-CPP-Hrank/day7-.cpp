// day7-arrays:
// 🎆 link:https://www.hackerrank.com/challenges/30-arrays/problem 🎆
#include <iostream>
using namespace std;
//vector<string> split_string(string); // as yaha pe apn vector-return-type fn ko declare kiya hai.

int main()
{
    int N;
    cin >> N;
    long A[N];
    for (int i = 0; i < N; i++) // yaha (i<N) is a checking-condition hoti hai, mtlb agr yeh true hogi tabhi work-box execute hoga otherwise nhi hoga.
    {
        cin >> A[i];
    };
    // reversefn(A);
    cout << " hello " << A[N - 1] << endl;
    cout << " hello " << A[N - 2] << endl;
    int x = (N - 1);
    for (int i = x; i >= 0; i--)
    {
        cout << A[i] << " ";
    };
    // reverse(arr.begin(),arr.end())
    cout << " byebye " << endl;

    return 0;
}

// problem-solution:
/*#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }
    for (int i = (n-1); i >= 0; i--)
    {
        cout << arr[i] << " ";
    };

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
*/
