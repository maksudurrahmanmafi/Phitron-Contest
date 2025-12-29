#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r,b;
    cin>>r>>b;
    if(r<b){
        int ans = b-r;
        cout<<(r*5)+(ans*2);
    }
     else if(r>b){
        int ans = r-b;
        // cout<<ans<<'\n';
        cout<<(b*5)+ans;
    }
    else cout<<r*5;
    return 0;
}
