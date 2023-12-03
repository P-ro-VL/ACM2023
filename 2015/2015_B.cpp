#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ifstream cin;
    // cin.open("example_test.txt");

    int k;
    cin >> k;

    string s;
    cin >> s;

    vector<int> pi(s.length());

    for (int z = 1; z <= k; z++)
    {
        int ans = 0;
        int j = 0;

        string t = s.substr(0, z);
        for (int i = 0; i < s.length(); i++)
        {
            while (j > 0 && s[i] != t[j])
                j = pi[j - 1];
            if (s[i] == t[j])
                j++;
            if (j == t.length())
                ans++;
        }

        bool remainMatch = true;
        string remain = s.substr(ans * t.length());
        for (int i = 0; i < remain.length(); i++)
        {
            if (t[i] != remain[i])
            {
                remainMatch = false;
            }
        }

        if (remainMatch)
        {
            cout << t;
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
