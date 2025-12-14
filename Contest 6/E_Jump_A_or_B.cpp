#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;

        if (a == b)
        {
            if (m == n * a)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
        {
            ll diff = a - b;
            ll diff2 = m - n * b;
            if (diff2 % diff == 0)
            {
                diff2 /= diff;
                if (diff2 >= 0 && diff2 <= n)
                    cout << "Yes\n";
                else
                    cout << "No\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }

    return 0;
}
