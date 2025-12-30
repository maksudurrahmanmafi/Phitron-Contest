#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, w;
    cin >> n >> w;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0, r = 0, l = 0;
    while (r < n)
    {
        sum += v[r];
        while (sum > w && l <= r)
        {
            sum -= v[l];
            l++;
        }
        if (sum > 0 && w % sum == 0)
        {
            cout << "YES\n";
            return 0;
        }
        r++;
    }
    cout << "NO\n";
    return 0;
}
