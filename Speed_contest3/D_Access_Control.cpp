#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        int reming =0;
        bool valid = true;
        for(auto c:s){
            if(c=='1'){
                reming =x;
            }else{
                if(reming==0){
                    valid = false;
                    break;;
                }
                reming--;
            }
        }
        if(valid) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
