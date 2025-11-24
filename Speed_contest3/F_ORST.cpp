#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){

        int m, n;
        cin >> m >> n;
        vector<int> a(m), b(n);
        for(int i =0;i<m;i++) cin>>a[i];
        for(int i =0;i<n;i++) cin>>b[i];

        int ans = *max_element(b.begin(), b.end());
        sort(a.end() - ans, a.end());
        for (auto x : a)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
