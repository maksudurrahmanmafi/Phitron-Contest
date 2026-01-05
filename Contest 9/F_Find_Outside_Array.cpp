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
        ll n;
        cin >> n;
        vector<ll> v(n);
        set<ll> st;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }
        sort(v.begin(), v.end());
        ll a = 0, b = 0;
        ll mn = v[0], mx = v[n - 1];
        bool flag = false;
        if (st.find(mn + mx) == st.end())
        {
            a = mn;
            b = mx;
            flag = true;
        }

        if (!flag && st.find(mn + mn) == st.end())
        {
            a = mn;
            b = mn;
            flag = true;
        }

        if (!flag && st.find(mx + mx) == st.end())
        {
            a = mx;
            b = mx;
            flag = true;
        }

        if (flag)
            cout << a << " " << b << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}
