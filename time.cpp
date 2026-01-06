#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int hour =0,minute=0,second=0;
    hour = n/3600;
    n =n-(hour*3600);
    minute = n/60;
    n-=(minute*60);
    second =n;
    cout<<hour<<":"<<minute<<":"<<second;
    return 0;
}
