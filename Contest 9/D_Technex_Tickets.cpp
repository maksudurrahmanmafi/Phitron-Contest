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
     if(n==1||n==3)cout<<1<<'\n';
     else if(n%2!=0)cout<<n/2<<'\n';
     else cout <<(n/2)+1<<'\n';
    }
    return 0;
}
