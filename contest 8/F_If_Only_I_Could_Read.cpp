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
        bool found = false;
        for (int i = 0; i < n-1; i++)
        {
            if (v[i] > v[i + 1])
            {
                cout << i+1 << " " << i + 2<<'\n';
                found = true;
                break;
            }
        }
        if(!found)cout<<-1<<'\n';
    }
    return 0;
}
