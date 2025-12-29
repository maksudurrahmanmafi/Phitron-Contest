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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool isPossible = true;
        for(int i =1;i<n;i++){
            if(v[i-1]%v[i]!=0){
                isPossible=false;
                break; 
            }
        }
        if(!isPossible)cout<<-1<<'\n';
        else {
              for (int i = 0; i < n; i++)
              {
                    cout << v[i]<<" ";
              }
        }
        cout<<'\n';
    }
    return 0;
}
