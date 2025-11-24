// #include <bits/stdc++.h>
// using namespace std;
// using int64 = long long;

// // gcd function
// int64 gcd(int64 a, int64 b) {
//     while(b) {
//         a %= b;
//         swap(a, b);
//     }
//     return a;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while(T--) {
//         int64 X, Y, K;
//         cin >> X >> Y >> K;

//         int64 g = gcd(X, Y);

//         int64 ans;
//         if (K == 0) ans = X + Y;
//         else if (K == 1) ans = min(X, Y) + g;
//         else ans = 2 * g;
//         cout << ans << '\n';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd(int x, int y)
{
    while (y)
    {
        x %= y;
        swap(x, y);
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin>>x>>y>>k;
        int ans = gcd(x, y);
        int sum;
        if (k == 0)
            sum = x + y;
        else if (k == 1)
            sum = min(x, y) + ans;
        else
            sum = 2 * ans;
        cout << sum << '\n';
    }
    return 0;
}
