// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int cnt = 0;
//         int a, b, c, d, e;
//         cin >> a >> b >> c >> d >> e;
//         if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0)
//         {

//                 cout << 400 << '\n';
//             continue;
//         }
//         if (a < 7)
//             cnt++;
//         if (b < 7)
//             cnt++;
//         if (c < 7)
//             cnt++;
//         if (d < 7)
//             cnt++;
//         if (e < 7)
//             cnt++;
//         cout << cnt * 100 << '\n';
//     }
//     return 0;
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
        vector<int> v(5);
        for (int i = 0; i < 5; i++)
        {
            cin >> v[i];
        }
        int sum =0;
        for(auto x:v) sum+=x;
        if(sum>=35){
            cout<<0<<'\n';
            continue;
        }
        sort(v.begin(),v.end());
        int cnt =0;
        for (int i = 0; i < 5 && sum < 35; i++) {
            sum += (10 - v[i]);
            cnt++;
        }
        cout<<cnt*100<<'\n';
    }
    return 0;
}
