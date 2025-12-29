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
     if(n==1)cout<<200<<'\n';
     else if(n%4==0) cout<<n*100<<'\n';
     else if((n+1)%4==0)cout<<n*100<<'\n';
     else cout<<n*100<<'\n';
    }
    return 0;
}
