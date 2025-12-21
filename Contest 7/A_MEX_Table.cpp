#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int l,r;
     cin>>l>>r;
     if(l>r)swap(l,r);
     cout<<r+1<<'\n';
    }
    return 0;
}
