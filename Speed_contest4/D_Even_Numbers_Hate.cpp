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
        int even = 0, odd = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == 0)
            cout << 0 << '\n';

        else{
            ll ans = even+1 +((odd-1)/2);
            if(ans>n) ans =n;
            cout<<ans<<'\n';
        }
    }
    return 0;
}
