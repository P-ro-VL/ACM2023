#include <bits/stdc++.h>

typedef long long int lli;

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        lli k;
        cin >> k;

        bool found = false;
        for (lli m = sqrt(k); m >= 1; m--)
        {
            double n = (2 * k - m - 1) / (double)(2 * m + 1);

            if (floor(n) == n && n >= m)
            {
                lli a = m, b = n;
                if (a > b)
                {
                    lli tg = a;
                    a = b;
                    b = tg;
                }
                cout << a << " " << b << endl;
                found = true;
                break;
            }
        }

        if (found == false)
        {
            cout << "-1 -1" << endl;
        }
    }
}