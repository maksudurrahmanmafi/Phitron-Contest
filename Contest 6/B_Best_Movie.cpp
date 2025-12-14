#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int ans = INT_MAX;
     while(n--){
        int a,b;
        cin>>a>>b;
        if(a>=7) ans = min(ans,b);
     }
     if(ans == INT_MAX) cout<<-1<<'\n';
     else cout<<ans<<'\n';
    }
    return 0;
}
