#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
#define m 1e7 + 9;

vector<lli> fibonacii;

lli fib(lli n)
{
    lli v = (1 / sqrt(5)) * (powf(((1 + sqrt(5)) / 2), n + 1) - powf(((1 - sqrt(5)) / 2), n + 1));
    return v;
}

int main()
{
    lli a, n;
    cin >> a >> n;

    init();

    lli sum = a;
    lli prevA = a;
    for (lli i = 1; i < n; i++)
    {
        lli _a = (prevA * fib(i)) / fib(i - 1);
        sum += _a;
        prevA = _a;
    }

    cout << sum % (10000009);

    return 0;
}