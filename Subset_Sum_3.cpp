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
        int n;
        cin >> n;
        vector<int> v(n);
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum =0;
        for (int i = 0; i < n; i++)
        {
            sum+=v[i];
            if(sum%3==0){
                flag = true;
                break;
            }
        }
        cout<<(flag?"Yes\n":"No\n");
    }
    return 0;
}
