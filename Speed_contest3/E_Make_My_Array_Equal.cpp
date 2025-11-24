// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<long long> v(n);
//         for (int i = 0; i < n; i++)
//             cin >> v[i];
//         bool equal = true;
//         for (int i = 0; i < n; i++)
//         {
//             if (v[i] != v[0])
//             {
//                 equal = false;
//                 break;
//             }
//         }
//         if (equal)
//             cout << "YES\n";
//         else
//         {
//             bool zero = false;
//             for (auto c : v)
//             {
//                 if (c == 0)
//                 {
//                     zero = true;
//                     break;
//                 }
//             }
//             if (zero)
//                 cout << "YES\n";
//             else
//                 cout << "NO\n";
//         }
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<long long> a(n);
//         bool equal = true, zero = false;
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//             if (a[i] != a[0]) equal = false;
//             if (a[i] == 0) zero = true;
//         }

//         if (equal || zero)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        set<long long> s;
        for(int i=0;i<n;i++){
            cin >> a[i];
            s.insert(a[i]);
        }

        if(s.size() == 1) cout << "YES\n";           // All equal
        else if(s.size() == 2 && s.count(0)) cout << "YES\n"; // Two elements, one is 0
        else cout << "NO\n";                         // Otherwise impossible
    }

    return 0;
}
