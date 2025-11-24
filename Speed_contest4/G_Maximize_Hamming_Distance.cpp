#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) {
        int N, M;
        cin >> N >> M;
        vector<string> S(M);
        for(int i = 0; i < M; i++) cin >> S[i];

        long long total = 0;

        for(int col = 0; col < N; col++) {
            int zeros = 0, ones = 0, q = 0;
            for(int row = 0; row < M; row++) {
                if(S[row][col] == '0') zeros++;
                else if(S[row][col] == '1') ones++;
                else q++;
            }

            // Maximum contribution
            int totalZeros = zeros + q/2 + q%2;
            int totalOnes = ones + q/2;
            // Alternatively, can do totalZeros = zeros + (q + 1)/2, totalOnes = ones + q/2
            total += 1LL * totalZeros * totalOnes;
        }
        cout << total << "\n";
    }
    return 0;
}
