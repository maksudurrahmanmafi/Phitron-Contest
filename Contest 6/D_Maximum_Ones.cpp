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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int one = count(s.begin(), s.end(), '1');
        int last = s.rfind('1');
        int zero = 0;
        for (int i = 0; i < last; i++)
        {
            if (s[i] == '0')
                zero++;
        }

        // int zero = count(s.begin(), s.begin() + last, '0');
        cout << one + min(k, zero) << '\n';
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) {
//         int N, K;
//         cin >> N >> K;
//         string S;
//         cin >> S;

//         int ones = 0;
//         for (char c : S)
//             if (c == '1') ones++;

//         int ans = ones;
//         int zeros = 0;

//         // Right to left traversal
//         for (int i = N - 1; i >= 0 && K > 0; i--) {
//             if (S[i] == '0') {
//                 zeros++;
//             } else { // S[i] == '1'
//                 int take = min(K, zeros);
//                 ans += take;
//                 K -= take;
//                 zeros -= take;
//             }
//         }

//         cout << ans << '\n';
//     }
//     return 0;
// }
