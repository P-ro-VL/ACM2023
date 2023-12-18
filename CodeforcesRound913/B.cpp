#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        stack<int> uppercases, lowercases;

        vector<char> chars;
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (c == 'b')
            {
                if (lowercases.size() > 0)
                {
                    int lastLowercase = lowercases.top();
                    chars[lastLowercase] = '_';
                    lowercases.pop();
                }
            }
            else if (c == 'B')
            {
                if (uppercases.size() > 0)
                {
                    int lastUppercase = uppercases.top();
                    chars[lastUppercase] = '_';
                    uppercases.pop();
                }
            }
            else
            {
                int index = chars.size();
                chars.push_back(c);
                if ('A' <= c && c <= 'Z')
                {
                    uppercases.push(index);
                }
                else
                {
                    lowercases.push(index);
                }
            }
        }

        for (auto &c : chars)
        {
            if (c != '_')
                cout << c;
        }

        cout << endl;
    }
}