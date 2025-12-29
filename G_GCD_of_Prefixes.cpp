#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    // লজিক অনুযায়ী, b[i] যদি b[i-1] কে ভাগ করতে না পারে, তবে এটি অসম্ভব।
    // তবে সাধারণত এই প্রবলেমে A বের করতে দিলে A_i = B_i ই সবচেয়ে সহজ সমাধান।
    
    bool possible = true;
    for (int i = 1; i < n; i++) {
        if (b[i-1] % b[i] != 0) {
            possible = false;
            break;
        }
    }

    if (!possible) {
        cout << -1 << "\n";
    } else {
        for (int i = 0; i < n; i++) {
            cout << b[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}