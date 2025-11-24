// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int N, K;
//     cin >> N >> K;
//     vector<int> A(N);
//     for(int i = 0; i < N; i++) cin >> A[i];

//     sort(A.begin(), A.end());

//     // Option 1
//     long long score1 = (long long)A[0] + A[K-1] + A[N-K] + A[N-1];
//     // Option 2
//     long long score2 = (long long)A[N-K] + A[N-1] + A[0] + A[K-1];

//     cout << max(score1, score2) << "\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while(T--) solve();
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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int s1, s2,mn,mx;
        if (k == 1)
        {
            s1 = n / 2 + 1;
            s2 = v.back();
            for(int i =0;i<s1;i++){
                mn=min(s1[0])

            }
        }
        else{

        }
    }
    return 0;
}
