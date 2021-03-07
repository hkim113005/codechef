#include <iostream>
using namespace std;

void solve() {
    long long N, B, M;

    cin >> N >> B >> M;

    long long ans = 0;

    while (N > 1) {
        //cout << N << " " << ans << endl;

        if (N % 2 == 0) {
            ans += (N / 2) * M + B;

            N = N / 2;
        }
        else {
            ans += ((N + 1) / 2) * M + B;

            N = N - (N + 1) / 2;
        }

        M *= 2;
    }

    ans += M;

    cout << ans << endl;
}

int main() {
    int T;

    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
