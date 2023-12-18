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
        char c, r;
        cin >> c >> r;

        for (char i = '1'; i <= '8'; i++)
        {
            if (r == i)
                continue;
            cout << c << i << endl;
        }

        for (char i = 'a'; i <= 'h'; i++)
        {
            if (c == i)
                continue;
            cout << i << r << endl;
        }
    }
}