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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int z = (int)(('z' - 'a') + 1);

        int arr[z];
        for (int i = 0; i < z; i++)
            arr[i] = 0;

        int max = -1;
        int maxIndex = -1;

        for (int i = 0; i < s.length(); i++)
        {
            char _c = s[i];
            arr[_c - 'a'] += 1;
            if (arr[_c - 'a'] > max)
            {
                max = arr[_c - 'a'];
                maxIndex = i;
            }
        }

        int result = max;
        bool passed = false;
        for (int i = 0; i < z; i++)
        {
            if (arr[i] == max && !passed)
            {
                passed = true;
                continue;
            }
            result = result - arr[i];
        }
        cout << (result < 0 ? n % 2 : result) << endl;
    }
}