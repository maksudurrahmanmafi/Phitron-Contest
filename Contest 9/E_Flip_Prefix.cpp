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
     string s;
     cin>>n>>s;
     int cnt =0,cnt1 =0;
     int ans =0;
     for(int i =0;i<n;i++){
        if(s[i]=='0')cnt++;
        else cnt1++;
        if(cnt==cnt1)ans++;

     }
     ll result =1LL<<ans;
    
     cout<<result<<'\n';
    }
    return 0;
}
