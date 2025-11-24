#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i =0;i<n;i++) cin>>v[i];
    set<string>st;
    vector<string> a;
    for(int i = n-1;i>=0;i--){
        if(st.find(v[i]) == st.end()){
            a.push_back(v[i]);
            st.insert(v[i]);
        }
    }
    for(auto it = a.begin();it!=a.end();it++){
        string s = *it;
        cout<<s.substr(s.size()-2,2);
    }
    cout<<'\n';
    return 0;
}
