#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        int cnt1 = 0;
        for (int i = 0; i < n; i++)
        {

            cin >> v[i];
            if (v[i] == 1)
                cnt1++;
        }
        if (cnt1 % 2 == n % 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
