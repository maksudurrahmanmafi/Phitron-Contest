#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    int max_len = 1, curr = 1, last_len = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i - 1])
            curr++;
        else
            curr = 1;
        max_len = max(max_len, curr);
    }
    vector<int> ans;
    ans.push_back(max_len);

    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == s.back())
            last_len++;
        else
            break;
    }
    while(q--){
        char c;
        cin>>c;
        if(s.back()==c) last_len++;
        else last_len =1;
        max_len = max(max_len,last_len);
        ans.push_back(max_len);
        s.push_back(c);
    }
      for (int i = 0; i < ans.size(); i++)
      {
            cout<<ans[i]<<' ';
      }
      cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
