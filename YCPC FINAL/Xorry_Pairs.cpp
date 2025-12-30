#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     ll n;
     cin>>n;
     if(n==0){
        cout<<1<<'\n';
        continue;
     }
     int k = __builtin_popcountll(n);
     ll ans = 1LL<<(k-1);
     cout<<ans<<'\n';
    }
    return 0;
}
