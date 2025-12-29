#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int ans = (a + 1) * 4 + (b * 3);
    if (ans % 8 == 0)
        cout << ans / 8 << '\n';
    else
        cout << (ans / 8) + 1 << '\n';

    return 0;
}
