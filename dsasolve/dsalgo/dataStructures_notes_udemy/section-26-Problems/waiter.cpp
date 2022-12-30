#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the waiter function below.
 */
vector<int> waiter(vector<int> number, int q)
{
    vector<int> answers;
    stack<int> a;
    for (int i = 0; i < number.size(); i++)
    {
        a.push(number[i]);
    };
    int prime[] = {2, 3, 5, 7, 11, 13};
    for (int j = 0; j < q; j++)
    {
        stack<int> c, b;
        for (int i = 0; i < number.size(); i++)
        {
            if (a.top() % prime[j] == 0)
            {
                b.push(a.top());
                a.pop();
            }
            else
            {
                c.push(a.top());
                a.pop();
            }
        }
        while (!b.empty())
        {
            answers.push_back(b.top());
            b.pop();
        }
        while (!a.empty())
        {
            a.pop();
        }
        while (!c.empty())
        {
            a.push(c.top());
            c.pop();
        }
    }
    if (!a.empty())
    {
        while (!a.empty())
        {
            answers.push_back(a.top());
            a.pop();
        }
    }
    return answers;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nq_temp;
    getline(cin, nq_temp);

    vector<string> nq = split_string(nq_temp);

    int n = stoi(nq[0]);

    int q = stoi(nq[1]);

    string number_temp_temp;
    getline(cin, number_temp_temp);

    vector<string> number_temp = split_string(number_temp_temp);

    vector<int> number(n);

    for (int number_itr = 0; number_itr < n; number_itr++)
    {
        int number_item = stoi(number_temp[number_itr]);

        number[number_itr] = number_item;
    }

    vector<int> result = waiter(number, q);

    for (int result_itr = 0; result_itr < result.size(); result_itr++)
    {
        fout << result[result_itr];

        if (result_itr != result.size() - 1)
        {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
