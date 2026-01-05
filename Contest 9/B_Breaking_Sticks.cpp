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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans=0;
        for(int i =0;i<n;i++){
            if(v[i]>1)ans+=(v[i]-1);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
