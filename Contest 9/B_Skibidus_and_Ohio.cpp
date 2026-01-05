#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool hasPair = false;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                hasPair = true;
                break;
            }
        }
        if(hasPair)cout<<1<<'\n';
        else cout<<s.size()<<'\n';
    }
    return 0;
}
