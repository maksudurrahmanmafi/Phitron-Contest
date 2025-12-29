#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,m;
     cin>>n>>m;
     set<int>st;
     for(int i =1;i<=n;i++){
        int x;
        cin>>x;
        st.insert(x);
     }
     cout<<m-st.size()<<'\n';
    }
    return 0;
}
