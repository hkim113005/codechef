#include <iostream>

using namespace std;

void solve() {
    int N, ans = 0;

    cin >> N;

    ans += N % 10;

    while (N / 10 != 0) {
        N /= 10;
    }

    ans += N;

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
