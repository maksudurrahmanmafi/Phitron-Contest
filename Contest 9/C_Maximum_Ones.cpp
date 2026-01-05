// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;

//         ll cnt1 = 0;
//         for (ll i = 0; i < n; i++)
//         {
//             if (s[i] == '1')
//             {
//                 cnt1++;
//             }
//         }
//         // ll cnt0 = n - cnt1;
//         ll eligible0 = 0;
//         for (ll i = 0; i < n - 1; i++)
//         {
//             if (s[i] == '0' && s[i + 1] == '1')
//                 eligible0++;
//         }

//         ll ans = 0;

//         ans = cnt1 + min(k, eligible0);

//         cout << ans << '\n';
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count1 = count(s.begin(), s.end(), '1');
        int eligible0 = 0;
        for(int i = 0; i < n-1; i++)
            if(s[i]=='0' && s[i+1]=='1') eligible0++;

        cout << count1 + min(k, eligible0+1) << "\n";
    }
}
