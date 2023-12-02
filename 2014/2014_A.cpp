#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int count = 0;
    for (int i = a; i <= b; i++)
    {
        int m = i % 19;
        if (m == 0 || m == 3 || m == 6 || m == 9 || m == 11 || m == 14 || m == 17)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}