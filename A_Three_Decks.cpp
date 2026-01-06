#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int a,b,c;
     cin>>a>>b>>c;
    //  int mx = max({a,b,c});
    //  int mn = min({a,b,c});
    //  int dif =mx-mn;
    //  int ans = (a+b+c)-(mx+mn);
    
    if((a%3)==0 && (b%3)==2 && (c%3)==1)cout<<"YES\n";
    else if((a%3)==2 &&(b%3)==0 && (c%3)==1)cout<<"YES\n";
    else cout<<"NO\n";

    }
    return 0;
}
