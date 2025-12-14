

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
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll one = count(v.begin(),v.end(),1);
        ll ans = n - one;
        if(one%2==0)ans+=one/2;
        else ans+=(one/2)+1;
        cout<<ans<<'\n';
    }
    return 0;
}
