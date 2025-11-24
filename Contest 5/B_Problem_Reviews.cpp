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
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = true;
        for(int i =0;i<n;i++){
            if(v[i]<=4){
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
