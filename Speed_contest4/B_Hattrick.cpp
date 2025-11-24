#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        vector<string>v={a,b,c,d,e,f};
        bool hatrick = false;
        for(int i =0;i<6;i++){
            if(v[i]=="W" &&v[i+1]=="W" && v[i+2]=="W"){
                hatrick = true;
                break;
            }

        }
        if(hatrick) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
