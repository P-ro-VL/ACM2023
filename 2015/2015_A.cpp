#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    vector<ll> values;
    for (int i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        values.push_back(v);
    }

    ll max = 0, currentMax = 0;
    ll tempStartIndex = -1;
    ll startIndex, endIndex;

    for (int i = 0; i < n; i++)
    {
        currentMax += values[i];

        if (currentMax <= 0)
        {
            currentMax = 0;
            tempStartIndex = -1;
        }
        else
        {
            if (tempStartIndex == -1)
                tempStartIndex = i;
            if (max < currentMax)
            {
                max = currentMax;
                startIndex = tempStartIndex;
                endIndex = i;
            }
        }
    }

    cout << (startIndex + 1) << " " << (endIndex + 1) << " " << max;
}