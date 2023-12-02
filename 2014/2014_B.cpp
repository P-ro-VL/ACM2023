#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<ll> targetSchool;
    vector<ll> currentSchool;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        targetSchool.push_back(v);
    }

    for (int i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        currentSchool.push_back(v);
    }

    std::sort(targetSchool.begin(), targetSchool.end());

    for (auto &v : currentSchool)
    {

        ll toBeRemoved = -1;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (v > targetSchool[i])
            {
                toBeRemoved = i;
                count++;
                break;
            }
        }
        if (toBeRemoved != -1)
            targetSchool.erase(targetSchool.begin() + toBeRemoved);
    }

    cout << count;
}