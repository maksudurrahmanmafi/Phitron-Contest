// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while(T--) {
//         long long X, Y;
//         cin >> X >> Y;

//         long long K;
//         if (X == 1) {
//             K = Y;
//         } else {
//             K = Y / (X - 1);
//         }

//         cout << K << "\n";
//     }
// }

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
        ll x, y;
        cin >> x >> y;
        ll k;
        if (x == 1)
            k = y;
        else
            k = y / (x - 1);

         cout<<k<<'\n';   
    }
    return 0;
}
