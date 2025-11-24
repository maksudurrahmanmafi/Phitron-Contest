#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int h,x,y;
        cin>>h>>x>>y;
  
        int ans = ceil(double(h)/x);
        if(y>=h){
             cout<<1<<'\n';
             continue;

        }
        int remain= h-y;
        int need=ceil(double(h-y)/x) +1 ;
        // int sp = need+1;
        cout<<min(ans,need)<<'\n';



    }
    return 0;
}
