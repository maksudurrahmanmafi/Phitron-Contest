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
        int a, b;
        cin >> a >> b;
        // if (a == 1 && b == 1 || (a % 2 != 0 && b % 2 != 0))
        //     cout << 2 << '\n';
        // else if (a % 2 == 0 && b % 2 == 0)
        //     cout << 0 << '\n';
        // else if ((a % 2 != 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 != 0))
        //     cout << 1 << '\n';
        if (__gcd(a, b) > 1)
            cout << 0 << '\n';
        else if (__gcd(a + 1, b) > 1 || __gcd(a, b + 1) > 1)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }
    return 0;
}
