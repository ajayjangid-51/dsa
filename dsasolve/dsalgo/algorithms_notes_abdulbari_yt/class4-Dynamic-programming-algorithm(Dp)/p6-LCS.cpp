#include <bits/stdc++.h>
using namespace std;

int LCSlength(string s1, string s2)
{
    int len = 0, j = -1, lastj = -1;
    for (int i = 0; i < s1.length(); i++)
    {
        j = lastj + 1;
        while (s2[j] != '\0')
        {
            if (s1[i] == s2[j])
            {
                len++;
                lastj = j;
                break;
            }
            j++;
        }
    }
    return len;
}
int main()
{
    // cout << LCSlength("abdace", "babce") << endl;
    cout << LCSlength("AWITXYSJQZNCIPTTNC", "JTJHRTVKW") << endl;

    return 0;
}